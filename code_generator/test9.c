void sort(int *a, int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void main(){
    int a[5];
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sort(a,5);
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}