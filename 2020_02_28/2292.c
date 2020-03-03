#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	int cnt = 1;
	int judge = 1;
	int discrimination = 0;

	scanf("%d", &n);

	while (judge != 0) {
		if (n == 1) {
			printf("%d\n", cnt);
			judge = 0;
		}
		else {
			discrimination = (3 * cnt * cnt) - (3 * cnt) + 1;
			if (n <= discrimination) {
				printf("%d\n", cnt);
				judge = 0;
			}
			else {
				cnt++;
			}
		}
	}

	return 0;
}