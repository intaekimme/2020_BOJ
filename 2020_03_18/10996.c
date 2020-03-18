#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int cnt = 0;
	scanf("%d", &n);
	
	if (n == 1) {
		printf("*\n");
	}
	else {
		for (i = 0; i < n; i++) {
			if (n % 2 == 0) {
				for (j = 0; j < 2; j++) {
					if (j == 0) {
						for (k = 0; k < n - 1; k++) {
							if (k % 2 == 0) {
								printf("*");
							}
							else {
								printf(" ");
							}
						}
					}
					else {
						// j == 1
						for (k = 0; k < n; k++) {
							if (k % 2 == 0) {
								printf(" ");
							}
							else {
								printf("*");
							}
						}
					}
					printf("\n");
				}
			}
			else {
				for (j = 0; j < 2; j++) {
					if (j == 0) {
						for (k = 0; k < n; k++) {
							if (k % 2 == 0) {
								printf("*");
							}
							else {
								printf(" ");
							}
						}
					}
					else {
						// j == 1
						for (k = 0; k < n - 1; k++) {
							if (k % 2 == 0) {
								printf(" ");
							}
							else {
								printf("*");
							}
						}
					}
					printf("\n");
				}
			}
		}
	}

	return 0;

}