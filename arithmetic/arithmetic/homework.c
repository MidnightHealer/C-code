#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	int days = 97;
	int week = days / 7;
	int leftdays = days % 7;
	printf("有%d个星期 有%d天放假", week, leftdays);
}