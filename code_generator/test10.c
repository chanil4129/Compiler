void main(){
    int *m;
    int num;
    int i;
    num=5;
    m=malloc(sizeof(int)*num);
    for(i=0;i<5;i++){
        m[i]=i;
    }

    for(i=0;i<5;i++){
        printf("%d\n",m[i]);
    }
}