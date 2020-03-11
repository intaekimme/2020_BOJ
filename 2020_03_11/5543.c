#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int hamburger[3] = { 0, };
	int drink[2] = { 0, };
	int sum[6] = { 0, };

	int i = 0;
	int j = 0;
	int k = 0;

	int min = 4000;

	for (i = 0; i < 3; i++) {
		scanf("%d", &hamburger[i]);
	}
	for (i = 0; i < 2; i++) {
		scanf("%d", &drink[i]);
	}
	
	i = 0;
	for (j = 0; j < 3; j++) {
		for (k = 0; k < 2; k++) {
			sum[i] = hamburger[j] + drink[k] - 50;
			i++;
		}
	}
	
	for (i = 0; i < 6; i++) {
		if (sum[i] < min) {
			min = sum[i];
		}
	}
	printf("%d\n", min);

	return 0;
}