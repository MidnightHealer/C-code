#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	int days = 97;
	int week = days / 7;
	int leftdays = days % 7;
	printf("��%d������ ��%d��ż�", week, leftdays);
}