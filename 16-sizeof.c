#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a;
    short b;
    int c;
    long d;
    long int e;
    long long f;
    float g;
    double h;
    long double i;
    printf("sizeof(a)           = %d\n", sizeof(a));
    printf("sizeof(char)        = %d\n", sizeof(char));

    printf("sizeof(b)           = %d\n", sizeof(b));
    printf("sizeof(short)       = %d\n", sizeof(short));

    printf("sizeof(c)           = %d\n", sizeof(c));
    printf("sizeof(int)         = %d\n", sizeof(int));

    printf("sizeof(d)           = %d\n", sizeof(d));
    printf("sizeof(long)        = %d\n", sizeof(long));

    printf("sizeof(e)           = %d\n", sizeof(e));
    printf("sizeof(long int)    = %d\n", sizeof(long int));

    printf("sizeof(f)           = %d\n", sizeof(f));
    printf("sizeof(long long)   = %d\n", sizeof(long long));

    printf("sizeof(g)           = %d\n", sizeof(g));
    printf("sizeof(float)       = %d\n", sizeof(float));

    printf("sizeof(h)           = %d\n", sizeof(h));
    printf("sizeof(double)      = %d\n", sizeof(double));

    printf("sizeof(i)           = %d\n", sizeof(i));
    printf("sizeof(long double) = %d\n", sizeof(long double));

    return 0;
}
