#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int num) {
	if (num <2) {
		if (num == 1) {
			return 1;
		}
		if (num == 0) {
			return 0;
		}
	}
	else {
		return fibo(num - 1) + fibo(num - 2);
	}
}

int main() {
	int n = 0;

	scanf("%d", &n);

	printf("%d\n", fibo(n));

	return 0;
}