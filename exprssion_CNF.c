#include <stdio.h>
#include <stdlib.h>

char ch=' ';
int num;
enum {NUL,NUMBER,PLUS,STAR,LPAREN,RPAREN,END} token;

/*
BNF 표기(or Context-Free Grammar) - G=(T,N,P,S), lamda는 빈문자
    G1=({+,*,(,),0,1,2,3,4,5,6,7,8,9}, {exprssion,expr_rest,term,term_rest,factor,number},P1,exprssion)

    P1:
        <expression> => <term> <expr_rest>
        <expr_rest> => + <term> <expr_rest>
                    | lamda
        <term> => <factor> <term_rest>
        <term_rest> => * <factor> <term_rest>
                    | lamda
        <factor> => <number>
                    | ( <expression> )
        <number> => 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 
*/
void get_token();
int expression();
int term();
int factor();

void error(int); //error handling

int main(void){
    int result;
    get_token();
    result=expression();
    if(token!=END) error(3); //EOF로 끝나지 않은 경우 에러처리
    else printf("%d \n",result);
}

//lexical : token 받고, 각 문자에 대한 처리
void get_token(){
    ch=getchar();
    while(ch==' ') ch=getchar(); //공백은 무시
    if(ch>='0'&&ch<='9') { //숫자일 경우 num 저장
        token=NUMBER;
        num=ch-'0';
    }
    else if(ch=='+') token=PLUS;
    else if(ch=='*') token=STAR;
    else if(ch=='(') token=LPAREN;
    else if(ch==')') token=RPAREN;
    else if(ch=='\n') token=END;
    else {
        //모르는 문자가 왔을 경우 에러처리
        token=NUL;
        error(4);
    }
}

int expression(){
    int result;
    result=term();
    while(token==PLUS){ //<expr_rest> => + <term> <expr_rest>인 경우
        get_token();
        result=result+term();
    }
    return result;
}

int term(){
    int result;
    result=factor();
    while(token==STAR){ //<term_rest> => * <factor> <term_rest>인 경우
        get_token();
        result=result*factor();
    }
    return result;
}

int factor(){
    int result;
    if(token==NUMBER){ //<factor> => <number>인 경우
        result=num; //<number> => 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 
        get_token();
    }
    else if(token==LPAREN){ //<factor> => ( <expression> )인 경우
        get_token();
        result=expression();
        if(token==RPAREN) get_token();
        else error(2); //왼쪽 괄호는 나왔는데 오른쪽 괄호가 안나왔다면 에러처리
    }
    else error(1); //number 혹은 '('은 무조건 필요하기 때문에 에러처리

    return result;
}

//error handling
void error(int i){
    switch(i){
        case 1: printf("error: [number] or '(' expected\n");
                break;
        case 2: printf("error: ')'expected\n");
                break;
        case 3: printf("error: EOF expeted\n");
                break;
        case 4: printf("error: dissatisfaction letter\n");
                break;
    }
    exit(1);
}