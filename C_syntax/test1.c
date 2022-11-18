int a;
float b;
char c;
void d;
int a=10;
float b=10.0;
char c='2';
int a,b=10,c;

int a="abc\n";
int b=10.3;
char c="ab\t";
float d=10;
auto;
static;
const;


auto int a;
static float b;
auto char c;
static void d;
auto int a=10;
typedef float b=10.0;
auto char c='2';

auto const int a;
const float b;
auto const char c;
static const void d;
auto const int a=10;
typedef const float b=10.0;
const char c='2';

auto volatile int a;
static volatile float b;
volatile char c;
typedef volatile void d;
auto volatile int a=10;
volatile float b=10.0;
auto volatile char c='2';

auto auto const const int a;
static auto const const int a;
auto auto const const float b;
auto static const const char c;
static auto const const void d;
auto typedef const const int a=10;
auto auto const const float b=10.0;
typedef typedef const const char c='2';


int *a;
float *x[10];
char (*y[10])(int);
int arr[10][10];
int (*p)[10];
int *f(float *);
int *(*x)()[];
int a[]()[];
int a[10]()[10];
int a[10]={10,3,4,5};
int a[10][10]={{10,203,4,3},{3,5,2,4}};
float (*b[])(int,float,...);
float x=(*p)(10);
auto char *b;
const float **c;
static const int *d=&a;
typedef char **e=&d;
const int const *t;


typedef enum {false,true} BOOLEAN;
enum e x;
enum {a,b,c=10,d,e,f}
enum e {a,b=4,c,d,e=16,f};
enum e {a,b,c,d} x;

struct S k;
struct S {
    int a,b;
    char *c;
};
typedef struct node{
    char *name;
    int value,level;
    struct node *link;
} Anode;