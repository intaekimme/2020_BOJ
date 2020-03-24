#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t = 0;
	int k = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	int l = 0;
	int apartment[15][15] = { 0, };
	
	scanf("%d", &t);

	for (i = 0; i < 15; i++) {
		for (j = 0; j < 15; j++) {
			if (i == 0 && j != 0) {
				apartment[i][j] = j;
			}
			else {
				for (l = 1; l <= j; l++) {
					apartment[i][j] += apartment[i - 1][l];
				}
			} 
		}
	}

	

	for (i = 0; i < t; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", apartment[k][n]);
	}

	return 0;
}