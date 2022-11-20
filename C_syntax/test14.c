typedef struct S1{
	int a;
    char c[10];
} S;

int main(){
    S *s1=(S *)malloc(sizeof(S));
	s1->a=3;
    s1->c[0]='t';

	return 0;
}