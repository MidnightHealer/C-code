#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n1 = 5;
	int n2 = 10;
	int sum = n1 + n2;
	int sub = n2 - n1;
	int mul = n2 * n1;
	int div = n2 / n1;
	int mod = n1 % n2;
	int num = 11;
	printf("\n**************************************************");
	printf("\n       小小计算机");
	printf("\n**************************************************");

	printf("\n%d+%d=%d", n1, n2, sum);
	printf("\n%d-%d=%d", n2, n1, sub);
	printf("\n%d*%d=%d", n1, n2, mul);
	printf("\n%d/%d=%d", n2, n1, div);
	printf("\n%d模%d=%d", n1, n2, mod);
}
