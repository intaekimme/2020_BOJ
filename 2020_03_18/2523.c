#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	int j = 0;

	scanf("%d", &n);

	for (i = 0; i < 2 * n - 1; i++){
		if (i < n) {
			for (j = 0; j <= i; j++) {		
				printf("*");
			}
		}
		else {
			for (j = i; j < 2 * n - 1; j++) {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}