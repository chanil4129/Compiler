#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ACTION 256
#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999

//Action table
int action[12][6]={
    {5,0,0,4,0,0},{0,6,0,0,0,ACC},{0,-2,7,0,-2,-2},{0,-4,-4,0,-4,-4},
    {5,0,0,4,0,0},{0,-6,-6,0,-6,-6},{5,0,0,4,0,0},{5,0,0,4,0,0},
    {0,6,0,0,11,0},{0,-1,7,0,-1,-1},{0,-3,-3,0,-3,-3},{0,-5,-5,0,-5,-5},
};
//Goto table
int go_to[12][3]={
    {1,2,3},{0,0,0},{0,0,0},{0,0,0},{8,2,3},{0,0,0},{0,9,3},{0,0,10},{0,0,0},{0,0,0},{0,0,0},{0,0,0}
};
/*
E -> E + T
    | T
T -> T * F
    | F
F -> ( E )
    | n
*/
int prod_left[7]={0,EXPRESSION,EXPRESSION,TERM,TERM,FACTOR,FACTOR};
int prod_length[7]={0,3,1,3,1,3,1};
int stack[1000];
int top=-1; //top init
int sym; //token 받고, 분석한 결과=>NUMBER,PLUS,STAR,LPAREN,RPAREN,END
char yytext[32]; //정수값을 받을 때 필요한 임시 배열 -> atoi를 통해 yylval에 넣어줌
int yylval; //토큰으로 받은 정수
int value[1000]; //계산 결과

int yyparse();
void shift(int);
void reduce(int);
void yyerror();
int yylex();
void lex_error();
void push(int);

int main(void){
    yyparse();
    printf("%d\n",value[top]);
}

//action table 파싱
int yyparse(){
    int i;
    stack[++top]=0; //처음에 0넣기
    sym=yylex();
    do{
        i=action[stack[top]][sym-ACTION];
        if(i==ACC) ;
        else if(i>0) shift(i); //양수이면 shift
        else if(i<0) reduce(-i);  //음수이면 reduce
        else yyerror(); //에러 처리
    } while(i!=ACC); //ACC일 때까지 반복
}

void shift(int i){
    push(i); //stack에 push
    value[top]=yylval; //value에 넣기
    sym=yylex(); 
}

void reduce(int i){
    int old_top;
    top-=prod_length[i];
    old_top=top;
    push(go_to[stack[old_top]][prod_left[i]]);
    switch (i){
        case 1: value[top]=value[old_top+1]+value[old_top+3];
                break;
        case 2: value[top]=value[old_top+1];
                break;
        case 3: value[top]=value[old_top+1]*value[old_top+3];
                break;
        case 4: value[top]=value[old_top+1];
                break;
        case 5: value[top]=value[old_top+2];
                break;
        case 6: value[top]=value[old_top+1];
                break;
        default: yyerror("parsing table error");
                break;
    }
}

void yyerror(){
    printf("syntax error\n");
    exit(1);
}

int yylex(){
    static char ch=' ';
    int i=0;
    while(ch==' '||ch=='\t') ch=getchar(); //공백은 무시
    //숫자이면 나머지 뒤 숫자까지 받아서 정수값 받기
    if(isdigit(ch)){
        do{    
            yytext[i++]=ch;
            ch=getchar();
        } while(isdigit(ch));
        yytext[i]='\0';
        yylval=atoi(yytext);
        return NUMBER;
    }
    else if(ch=='+'){
        ch=getchar();
        return PLUS;
    }
    else if(ch=='*'){
        ch=getchar();
        return STAR;
    }
    else if(ch=='('){
        ch=getchar();
        return LPAREN;
    }
    else if(ch==')'){
        ch=getchar();
        return RPAREN;
    }
    else if(ch=='\n'||ch==EOF) return END;
    else lex_error();
}

void lex_error(){
    printf("illegal token\n");
    exit(1);
}

void push(int i){
    stack[++top]=i;
}