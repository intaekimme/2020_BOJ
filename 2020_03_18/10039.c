#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[5] = { 0, };
	int avg = 0;
	int i = 0;
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	for (int i = 0; i < 5; i++) {
		if (arr[i] >= 40) {
			avg += arr[i];
		}
		else {
			avg += 40;
		}
	}
	
	avg = avg / 5;

	printf("%d\n", avg);
	
	return 0;

}