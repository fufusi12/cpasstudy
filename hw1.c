/*�ִ� �����(GCD), �ּ� �����(LCM)�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ִ� �����(GCD)�� �� ���� ����� ��� �� ���� ū ���� �ǹ��ϸ�, �ּ� �����(LCM)�� �� ���� ����� ��� �� ���� ���� ���� �ǹ��Ѵ�.
�� ���� �Է¹޾� �ִ� �����(GCD)�� �ּ� �����(LCM)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, �Լ��� �̿��Ͽ� �ۼ��Ͻÿ�.

HINT : GCD�� ����Լ��� �̿��Ͽ� �ۼ��� �� �ְ�, LCM�� GCD�� �̿��Ͽ� ����� �� �ִ�.

�Է�
�� ���� �Էµȴ�. (1 <= a, b <= 1000)

���
�ִ� �����(GCD)�� �ּ� �����(LCM)�� ����Ѵ�.*/

#include <stdio.h>

int GCD(x, y);
int LCM(x, y);

int main(void) {
	int a , b;
	printf("�� ���� �Է��Ͻÿ�.\n");
	scanf("%d %d", &a, &b);

	printf("�ִ� �����: %d\n", GCD(a, b));
	printf("�ּ� �����: %d", LCM(a, b));
	return 0;
}

int GCD(int x, int y) {
	int GCD, num, LCM = 1;
	int a = x, b = y;
	num = a > b ? b : a;


	for (int i = 1; i <= num; i++) {
		if (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
			LCM *= i;
		}
	}
	GCD = LCM * a * b;

	return GCD;
}
int LCM(int x, int y) {
	return (x * y) / GCD(x, y);
}