/*
�Ǻ���ġ ������ ����Լ��� �����ϰ�, n��° �Ǻ���ġ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ex)
input: 10
output: 55
*/

#include <stdio.h>
int fivo(int n);


int main(void) {
	int num = 0;

	printf("input: ");
	scanf("%d", &num);

	printf("output: %d", fivo(num));

	return 0;
}

int fivo(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else{
		return fivo(n - 2) + fivo(n - 1);
	}
}
