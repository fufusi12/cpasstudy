/*
배열과 포인터를 이용하여 로또 번호 생성기를 구현하시오.
로또 번호는 1부터 45까지의 숫자 중 6개를 랜덤하게 선택하여 출력한다.
단, 중복된 숫자가 나오면 안된다.

자료형은 정수형 배열을 사용하고, 포인터를 이용하여 배열의 요소에 접근한다.
배열의 크기는 6으로 고정한다.

또한, 생성한 로또 번호를 오름차순으로 정렬하여 출력한다.
예를 들어, 생성된 번호가 4, 2, 5, 1, 3, 6 이라면 1, 2, 3, 4, 5, 6으로 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int temp = 0;
    int lotto[6] = {0};

    srand((unsigned)time(NULL)); //현재 시간으로 시드값 설정

    for (int i = 0; i < 6; i++) {
        lotto[i] = rand() % 45 + 1;
      printf("%d ", lotto[i]);
    }
    printf("\n");
   
        for (int j = 0; j < 5; j++) {            
            for (int h = 0; h < 5-j; h++) {
                if (lotto[h] > lotto[h+1]){
                   temp = lotto[h];
                   lotto[h] = lotto[h + 1];
                   lotto[h + 1] = temp;
                }
            }
         }
        printf("오름차순:");
         for (int k = 0; k < 6; k++) {
        printf("%d ", lotto[k]);
        }
        printf("\n");

        for (int j = 0; j < 5; j++) {
            for (int h = 0; h < 5 - j; h++) {
                if (lotto[h] < lotto[h + 1]) {
                    temp = lotto[h];
                    lotto[h] = lotto[h + 1];
                    lotto[h + 1] = temp;
                }
            }
        }
        printf("내림차순:");
        for (int k = 0; k < 6; k++) {
            printf("%d ", lotto[k]);
        }
        return 0;
}