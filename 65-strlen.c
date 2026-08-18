#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char s1[10] = {'A', '\0', 'B', 'C', '\0', 'D'}; //(1)
    char s2[] = "\t\v\\\0will\n";                   //(2)
    char s3[] = "\x69\082\n";                       //(3)

    printf("s1=%d\n", strlen(s1));
    printf("s2=%d\n", strlen(s2));
    printf("s3=%d\n", strlen(s3));
    printf("s3[0]=%#x\n",s3[0]) ;
    printf("s3[1]=%#x\n",s3[1]) ;
    return 0;
}
