extern char *yytext;
extern int line_no;

int main(void){
    yyparse();
    printf("Success\n");
}

void yyerror(char *s){
    printf("line %d: %s near %s\n",line_no,s,yytext);
    exit(1);
}

void yywrap(){
    return 1;
}