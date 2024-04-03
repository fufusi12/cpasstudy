#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int mid, fin;
	double ave = 0;

	printf("吝埃绊荤 己利:");
	scanf("%d", &mid);
	printf("扁富绊荤 己利:");
	scanf("%d", &fin);

	printf("乞闭己利:%lf\n", ((double)mid+(double)fin)/2);
	ave = ((double)mid + (double)fin) / 2;


	if (ave >= 90)
		printf("己利:A");
	else if(80<=ave&&ave<90)
		printf("己利:B");
	else if (70 <= ave&&ave < 80)
		printf("己利:C");
	else if (60 <= ave && ave < 70)
		printf("己利:D");
	else 
		printf("己利:F");

	return 0;
}
