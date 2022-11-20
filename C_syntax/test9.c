int fun2(int *, float [],char ***);

int fun1(int *a, float b[], char **c[]){
    int t=fun2(a,b,c);
    return 3;
}

int fun2(int *a, float b[],char **c[]){
    return 4;
}