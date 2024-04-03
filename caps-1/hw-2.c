/*
문제 : 1부터 100까지의 숫자 중에서 3의 배수만 출력하는 프로그램을 작성하시오.
입력 : 없음
출력 : 3의 배수를 공백으로 구분하여 출력한다.

문제를 해결했을 경우, 저번 수업때 만들었던 본인의 개인 github repository에 해당 문제의 코드를 push한다.
*/

#include <stdio.h>
#define CRT_SECURE_NO_WARRINGS

int main(void) {
	for (int i = 1; i < 100, i++;) {
		if (i % 3 == 1)
			printf("%d", i);
	}
}