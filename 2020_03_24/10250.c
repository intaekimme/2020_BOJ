#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t = 0;
	int h = 0;
	int w = 0;
	int n = 0;
	int i = 0;

	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);

		if (n % h) {
			if (n / h + 1 > 10) {
				printf("%d%d\n", n % h, n / h + 1);
			}
			else {
				printf("%d0%d\n", n % h, n / h + 1);
			}
		}
		else {
			if (n / h >= 10) {
				printf("%d%d\n", h, n / h);
			}
			else {
				printf("%d0%d\n", h, n / h);
			}
		}
	}
	return 0;

}
