/*
문제 : 계산기 프로그램을 작성하시오.
사용자로부터 두 개의 정수를 입력받아 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램을 작성하시오.
두 개의 정수를 입력받은 후에는 사용자로부터 수행할 연산을 입력받아 해당 연산을 수행하고 그 결과를 출력한다.
ex) "두개의 정수를 입력하시오 : 10 20"
	"연산을 선택하시오(+, -, *, /) : +"
	"결과 : 30"



참고)
while(1) { } 를 사용하면 무한 루프를 구현할 수 있다. 왜냐하면 C언어에서 0을 제외한 모든 값은 참으로 판단하기 때문이다.
(+, -, *, /) 이외의 연산자가 입력되었을 때는 "잘못된 연산자입니다." 라는 메시지를 출력하고 다시 연산을 입력받는다.
나눗셈 연산시 divide by zero 오류가 발생할 수 있으므로 이를 조심해야 한다.
문자 '!'를 입력받으면 프로그램을 종료한다.
무한 루프 탈출의 경우 break; 를 사용한다.

문제를 해결했을 경우, 저번 수업때 만들었던 본인의 개인 github repository에 해당 문제의 코드를 push한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, result;
	char select;

	while(1){
	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	printf("연산을 선택하시오(+, -, *, /), !를 입력하면 프로그램이 종료됩니다. : ");
	scanf(" %c", &select);

		switch (select) {
			case '+':
				printf("결과:%d\n", a+b);
				break;

			case'-':
				printf("결과:%d\n", a-b);
				break;

			case'*':
				printf("결과:%d\n", a*b);
				break;

			case'/':
				if (b == 0) {
					printf("0으로 나눌 수 없습니다.\n");
				}
				else {
					printf("결과:%lf\n",((double) a/(double)b));
					break;
				}
			case'!':
				printf("프로그램을 종료합니다.");
				return;

			default:	
					printf("잘못된 연산자입니다.\n");
		}
	}

	return 0;
}
