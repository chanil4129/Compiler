#include <stdio.h>
#include <stdlib.h>

char ch=' ';
int num;
enum {NUL,NUMBER,PLUS,STAR,LPAREN,RPAREN,END} token;

void get_token();
int expression();
int term();
int factor();
void error();

int main(void){
    int result;
    get_token();
    result=expression();
    if(token!=END) error(3);
    else printf("%d \n",result);
}

void get_token(){
    ch=getchar();
    while(ch==' ') ch=getchar();
    if(ch>='0'&&ch<='9') {
        token=NUMBER;
        num=ch-'0';
    }
    else if(ch=='+') token=PLUS;
    else if(ch=='*') token=STAR;
    else if(ch=='(') token=LPAREN;
    else if(ch==')') token=RPAREN;
    else if(ch=='\n') token=END;
}

int expression(){
    int result;
    result=term();
    while(token==PLUS){
        get_token();
        result=result+term();
    }
    return result;
}

int term(){
    int result;
    result=factor();
    while(token==STAR){
        get_token();
        result=result*factor();
    }
    return result;
}

int factor(){
    int result;
    if(token==NUMBER){
        result=num;
        get_token();
    }
    else if(token==LPAREN){
        get_token();
        result=expression();
        if(token==RPAREN) get_token();
        else error(2);
    }
    else error(1);

    return result;
}

//error handling
void error(int i){
    switch(i){
        case 1: printf("error: number or '(' expected\n");
                break;
        case 2: printf("error: ')'expected\n");
                break;
        case 3: printf("error: EOF expeted\n");
                break;
    }
    exit(1);
}