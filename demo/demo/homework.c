#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char name[10] = "����";
	short age = 20;
	float score = 78.5f;
	char gender = 'M';
	char hobby[10] = "����";
	printf("����\t����\t�ɼ�\t����\n%s\t%d\t%.2f\t%c\t%s", name, age, score, gender, hobby);
	return 0;
}