/*
�迭�� �����͸� ��� ����Ͽ� �ذ��� �� �ִ� ������ �ϳ� �����Ͻÿ�.
*/

#include <stdio.h>

int main(void) {
	int team_score[3][3] = { 0 };
	int* p_team;
	p_team = &team_score[1][3];
	int temp=0;
	int win_score = 0;


	printf(" �� �� ����\n");

	for (int i= 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			//for (int k = 1; k < 11; k++) {
				//printf("%d:" ,k);
				scanf("%d", &team_score[i][j]);
			//}
		}
	}
	
	for (int k = 0; k < 3; k++) {
		team_score[k][2] = ((3 * team_score[k][0]) - team_score[k][1]);
	}
	printf("\n");

	for (int k = 0; k < 3; k++) {
		for (int l = 0; l < 3 - k; l++) {
			if ((*p_team + k) + 2 < *(p_team + k + 1) + 2) {
				temp = (*p_team + k) + l;
				(*p_team + k) + l = (*p_team + k + 1) + l;
				(*p_team + k + 1) + l = temp;
			}
		}
	}



	/*for (int h = 0; h < 3; h++) {
		for (int l = 0; l < 3; l++) {
			printf("%d ", team_score[h][l]);
		}
		printf("\n");
	}*/

}