#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int hour = 0;
	int minute = 0;

	scanf("%d %d", &hour, &minute);

	if (hour != 0) {
		if (minute >= 45) {
			minute -= 45;
		}
		else {
			hour -= 1;
			minute = 60 - (45 - minute);
		}
	}
	else {
		if (minute >= 45) {
			minute -= 45;
		}
		else {
			hour = 23;
			minute = 60 - (45 - minute);
		}
	}

	printf("%d %d\n", hour, minute);
	return 0;
}