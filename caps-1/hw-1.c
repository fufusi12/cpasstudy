#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int mid, fin;
	double ave = 0;

	printf("�߰���� ����:");
	scanf("%d", &mid);
	printf("�⸻��� ����:");
	scanf("%d", &fin);

	printf("��ռ���:%lf\n", ((double)mid+(double)fin)/2);
	ave = ((double)mid + (double)fin) / 2;


	if (ave >= 90)
		printf("����:A");
	else if(80<=ave&&ave<90)
		printf("����:B");
	else if (70 <= ave&&ave < 80)
		printf("����:C");
	else if (60 <= ave && ave < 70)
		printf("����:D");
	else 
		printf("����:F");

	return 0;
}
