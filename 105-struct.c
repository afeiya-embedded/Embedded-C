#include<stdio.h>
#pragma pack(2)
struct s {
	int a;     // 规则1     4   规则2    4 
	double b;  // 规则1     8   规则2    8 
	char c;    // 规则1     1   规则2    2 
}s;
int main()
{
	printf("sizeof size = % d\n", sizeof(s));
}