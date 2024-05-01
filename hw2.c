/*
피보나치 수열을 재귀함수로 구현하고, n번째 피보나치 수를 출력하는 프로그램을 작성하시오.

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
