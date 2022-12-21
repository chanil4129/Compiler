int strcmp(char *s,char *t){
    for(;*s==*t;s++){
        if(*s==0)
            return 0;
        t++;
    }
    return *s-*t;
}

void main(){
    int i;
    char s1[3];
    char s2[3];
    char s3[3];
    s1[0]='a';
    s1[1]='a';
    s1[2]='\0';
    s2[0]='a';
    s2[1]='a';
    s2[2]='\0';
    s3[0]='a';
    s3[1]='b';
    s3[2]='\0';
    i=strcmp(s1,s2);
    printf("%d\n",i);
    i=strcmp(s1,s3);
    printf("%d\n",i);
}