#include <stdio.h>
#include <string.h>

union 
{
    unsigned char data[4] ; 
    float floatData;
    unsigned int intData;
}un1={0};


int main(int argc, char const *argv[])
{
    float x = 123.456; 
    memcpy(un1.data,&x,sizeof(x)); // 
    printf("un1.floatData=%f\n",un1.floatData);

    int  y = 1234;
    memcpy(un1.data,&y,sizeof(y)); // 
    printf("un1.intData=%d\n",un1.intData);
    return 0;
}
