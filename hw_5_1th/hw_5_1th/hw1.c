/*
�迭�� �����͸� �̿��Ͽ� �ζ� ��ȣ �����⸦ �����Ͻÿ�.
�ζ� ��ȣ�� 1���� 45������ ���� �� 6���� �����ϰ� �����Ͽ� ����Ѵ�.
��, �ߺ��� ���ڰ� ������ �ȵȴ�.

�ڷ����� ������ �迭�� ����ϰ�, �����͸� �̿��Ͽ� �迭�� ��ҿ� �����Ѵ�.
�迭�� ũ��� 6���� �����Ѵ�.

����, ������ �ζ� ��ȣ�� ������������ �����Ͽ� ����Ѵ�.
���� ���, ������ ��ȣ�� 4, 2, 5, 1, 3, 6 �̶�� 1, 2, 3, 4, 5, 6���� ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int temp = 0;
    int lotto[6] = {0};

    srand((unsigned)time(NULL)); //���� �ð����� �õ尪 ����

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
        printf("��������:");
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
        printf("��������:");
        for (int k = 0; k < 6; k++) {
            printf("%d ", lotto[k]);
        }
        return 0;
}