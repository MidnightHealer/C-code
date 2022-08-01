#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	int a = 300;
	int b = 400;
	int * ptr = &a;
	*ptr = 100;
	ptr = &b;
	*ptr = 200;
	printf("\n a=%d,b=%d,*ptr=%d",a,b,*ptr);
}