#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	double huashi = 146.7;
	double sheshi = 5.0 / 9 * (huashi - 100);
	printf("\n华氏温度%.2f对应的摄氏温度是%.2f", huashi, sheshi);
	getchar();
}