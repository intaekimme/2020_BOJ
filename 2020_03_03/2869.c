#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double up = 0;
	double down = 0;
	double goal = 0;
	int day = 1;

	scanf("%lf %lf %lf", &up, &down, &goal);
	if (up >= goal) {
		printf("%d\n", day);
	}
	else {
		goal -= up - down;
		goal = goal / (up - down);
		
		day = (int)(goal + 0.5);
		printf("%d\n", day);
	}
	
	return 0;

}