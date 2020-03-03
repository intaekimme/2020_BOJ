#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int up = 0;
	int down = 0;
	int state = 0;
	int goal = 0;
	int day = 1;

	scanf("%d %d %d", &up, &down, &goal);

	while (state < goal) {
		state += up;
		if (state >= goal) {
			printf("%d\n", day);
		}
		else {
			state -= down;
			day++;
		}
	}

	return 0;

}