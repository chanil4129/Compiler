struct S1 {
  int a;
  char b;
};

void fun() {
  struct S1 s1 = {3,'b'};
  struct S1 s2[3];
  struct S1 *s3;
  
  s1.a=5;
  s1.b='t';
}