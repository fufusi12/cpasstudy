#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int shape, floor;
	printf("피라미드의 층 수를 입력하세요: ");
	scanf("%d", &floor);
	printf("정피라미드일 경우1, 역피라미드일 경우 2를 입력하세요: ");
	scanf("%d", &shape);

	if (shape == 1) {
		for (int i = 0; i < floor; i++) {
			for (int j = 0; j<(floor - i); j++) {
				printf(" ");
			}
			for (int k = 0; k < 2 *i + 1;k++) {
				printf("*");
			}
			printf("\n");
		}
	}
	if (shape == 2) {
		for (int i = 0; i < floor; i++) {
			for (int j = 0; j <i; j++) {
				printf(" ");				
			}									
			for (int k = 0; k < 2*(floor-i)-1;k++) { 
				printf("*");						
			}										
			printf("\n");
		}
	}
}

/*
문제 : 피라미드를 출력하는 프로그램을 작성하시오. 단, 사용자로부터 입력 받은 숫자만큼의 높이를 가지는 피라미드를 출력해야 한다.
사용자로부터 높이를 입력 받은 후에는, 정피라미드, 역피라미드를 선택할 수 있도록 한다.
정피라미드는 아래와 같이 출력되어야 한다.
입력 예시 : 5
"정피라미드일 경우 1, 역피라미드일 경우 2를 입력하세요 : 1"
출력 예시 :
	*
   ***
  *****
 *******
*********

역피라미드는 아래와 같이 출력되어야 한다.
입력 예시 : 5
"정피라미드일 경우 1, 역피라미드일 경우 2를 입력하세요 : 2"
출력 예시 :
*********
 *******
  *****
   ***
	*

참고)
printf 함수에서 공백을 출력할 때는 " "을 사용하면 된다.
printf 함수에서 개행(enter)을 출력할 때는 "\n"을 사용하면 된다.
이 문제는 for문을 두 가지로 중첩하여 사용하면 해결할 수 있다.

문제를 해결했을 경우, 저번 수업때 만들었던 본인의 개인 github repository에 해당 문제의 코드를 push한다.
*/