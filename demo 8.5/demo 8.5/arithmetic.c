#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	int a = 10, b = 20;
	int i = a++;
	printf("i=%d\n a=%d\n", i, a);
	i = ++a;
	printf("i=%d\n a=%d\n", i, a);
	i = b--;
	printf("i=%d\n b=%d\n", i, b);
	i = --b;
	printf("i=%d\n b=%d\n", i, b);
}