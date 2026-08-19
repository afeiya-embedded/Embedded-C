#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a = 10;
    short b = 10;
    int c = 10;
    long d = 10;
    long int e = 10;
    long long f = 10;
    float g = 10.0;
    double h = 10.0;
    long double i = 10.0;

    char *pa = &a;
    short *pb = &b;
    int *pc = &c;
    long *pd = &d;
    long int *pe = &e;
    long long *pf = &f;
    float *pg = &g;
    double *ph = &h;
    long double *pi = &i;

    printf("&a=%p\n", &a);
    printf("&b=%p\n", &b);
    printf("&c=%p\n", &c);
    printf("&d=%p\n", &d);
    printf("&e=%p\n", &e);
    printf("&f=%p\n", &f);
    printf("&g=%p\n", &g);
    printf("&h=%p\n", &h);
    printf("&i=%p\n", &i);

    // 00 00 00 00 00 61 FE 07  这个地址是8字节大小， 需要使用8字节来存放这个地址

    // 指针变量保存变量的地址
    // 64位系统的地址是64位(8字节)的，因此一个指针变量保存一个地址，这个指针变量占用8字节。

    printf("sizeof(char)              =%d\n", sizeof(char));
    printf("sizeof(char*)             =%d\n", sizeof(char*));
    printf("sizeof(pa   )             =%d\n", sizeof(pa));

    printf("sizeof(short)             =%d\n", sizeof(short));
    printf("sizeof(short*)            =%d\n", sizeof(short*));
    printf("sizeof(pb   )             =%d\n", sizeof(pb));

    printf("sizeof(int)               =%d\n", sizeof(int));
    printf("sizeof(int*)              =%d\n", sizeof(int*));
    printf("sizeof(pc   )             =%d\n", sizeof(pc));

    printf("sizeof(long)              =%d\n", sizeof(long));
    printf("sizeof(long*)             =%d\n", sizeof(long*));
    printf("sizeof(pd   )             =%d\n", sizeof(pd));

    printf("sizeof(long int)          =%d\n", sizeof(long int));
    printf("sizeof(long int*)         =%d\n", sizeof(long int*));
    printf("sizeof(pe   )             =%d\n", sizeof(pe));

    printf("sizeof(long long)         =%d\n", sizeof(long long));
    printf("sizeof(long long*)        =%d\n", sizeof(long long*));
    printf("sizeof(pf   )             =%d\n", sizeof(pf));

    printf("sizeof(float)             =%d\n", sizeof(float));
    printf("sizeof(float*)            =%d\n", sizeof(float*));
    printf("sizeof(pg   )             =%d\n", sizeof(pg));

    printf("sizeof(double)            =%d\n", sizeof(double));
    printf("sizeof(double*)           =%d\n", sizeof(double*));
    printf("sizeof(ph   )             =%d\n", sizeof(ph));

    printf("sizeof(long double)       =%d\n", sizeof(long double));
    printf("sizeof(long double*)      =%d\n", sizeof(long double*));
    printf("sizeof(pi   )             =%d\n", sizeof(pi));


    printf("pa=%p\n", pa);  //pa 是字符指针变量  
                            // pa +1 = pa + sizeof(char)  ,最后地址+1 
    pa ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pa=%p\n", pa);  //pa 是字符指针变量  

    printf("pb=%p\n", pb);  //pb 是短整型指针变量  
                            // pb +1 = pb + sizeof(short)  ,最后地址+2
    pb ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pb=%p\n", pb);  //pb 是短整型指针变量  

    printf("pc=%p\n", pc);  //pc 是整型指针变量  
                            // pc +1 = pc + sizeof(int)  ,最后地址+4
    pc ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pc=%p\n", pc);  //pc 是整型指针变量  

    printf("pd=%p\n", pd);  //pd 是长整型指针变量  
                            // pd +1 = pd + sizeof(long)  ,最后地址+4
    pd ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pd=%p\n", pd);  //pd 是长整型指针变量  

    printf("pe=%p\n", pe);  //pe 是长整型指针变量  
                            // pe +1 = pe + sizeof(long int)  ,最后地址+4
    pe ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pe=%p\n", pe);  //pe 是长整型指针变量  

    printf("pf=%p\n", pf);  //pf 是长长整型指针变量  
                            // pf +1 = pf + sizeof(long long)  ,最后地址+8
    pf ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pf=%p\n", pf);  //pf 是长长整型指针变量  

    printf("pg=%p\n", pg);  //pg 是单精度浮点型指针变量  
                            // pg +1 = pg + sizeof(float)  ,最后地址+4
    pg ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pg=%p\n", pg);  //pg 是单精度浮点型指针变量  

    printf("ph=%p\n", ph);  //ph 是双精度浮点型指针变量  
                            // ph +1 = ph + sizeof(double)  ,最后地址+8
    ph ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("ph=%p\n", ph);  //ph 是双精度浮点型指针变量  

    printf("pi=%p\n", pi);  //pi 是长双精度浮点型指针变量  
                            // pi +1 = pi + sizeof(long double)  ,最后地址+16
    pi ++ ;  // 偏移一个元素的大小 ， 不是一个字节的大小
    printf("pi=%p\n", pi);  //pi 是长双精度浮点型指针变量  



    return 0;
}
