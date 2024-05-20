#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5

int main() {
	int arr[SIZE][SIZE] = { 0 };
	int *MAX, *MIN;

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = rand() % 100 + 1;
			for (int k = 0; j < j; k++) {
				if (arr[i][j] == arr[i][k]) {
					j--;
				}
			}

			if (j == 4) {
				printf("%3d\n", arr[i][j]);
			}
			else {
				printf("%3d ", arr[i][j]);
			}
		}
	}

	MAX = MIN = &arr[0][0];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE ; j++) {
			if (arr[i][j] > *MAX) {
				MAX = &arr[i][j];
			}
			if (arr[i][j] < *MIN) {
				MIN = &arr[i][j];
			}
		}
	}

	printf("\nÃÖ´ñ°ª:%d, À§Ä¡:%d", *MAX, MAX);
	printf("\nÃÖ¼Ú°ª:%d, À§Ä¡:%d", *MIN, MIN);
}