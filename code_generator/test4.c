int muitiply(int a, int b){
    int result;
    result=0;
    while(a){
        if(a%2)
            result=result+b;
        a=a/2;
        b=b*2;
    }
    return result;
}

void main(void){
    int i;
    i=muitiply(3,4);
    printf("result : %d\n",i);
}