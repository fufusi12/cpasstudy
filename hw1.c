/*최대 공약수(GCD), 최소 공배수(LCM)를 구하는 프로그램을 작성하시오.
최대 공약수(GCD)는 두 수의 공통된 약수 중 가장 큰 수를 의미하며, 최소 공배수(LCM)는 두 수의 공통된 배수 중 가장 작은 수를 의미한다.
두 수를 입력받아 최대 공약수(GCD)와 최소 공배수(LCM)를 출력하는 프로그램을 작성하시오.
단, 함수를 이용하여 작성하시오.

HINT : GCD는 재귀함수를 이용하여 작성할 수 있고, LCM은 GCD를 이용하여 계산할 수 있다.

입력
두 수가 입력된다. (1 <= a, b <= 1000)

출력
최대 공약수(GCD)와 최소 공배수(LCM)를 출력한다.*/

#include <stdio.h>

int GCD(x, y);
int LCM(x, y);

int main(void) {
	int a , b;
	printf("두 수를 입력하시오.\n");
	scanf("%d %d", &a, &b);

	printf("최대 공약수: %d\n", GCD(a, b));
	printf("최소 공배수: %d", LCM(a, b));
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