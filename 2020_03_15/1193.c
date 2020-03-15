#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0;
	int n = 1;
	int standard = 0;
	int deno = 0;
	int mole = 1;
	int i = 0;
	scanf("%d", &x);
	
	while (x > (n * (n + 1)) / 2) {
		n++;
	}
	deno = n;
	standard = (n * (n + 1)) / 2;

	for (i = standard - x; i > 0; i--) {
		deno--;
		mole++;
	}
	if (n % 2 == 1) {
		printf("%d/%d\n", mole, deno);
	}
	else {
		printf("%d/%d\n", deno, mole);
	}
	
	return 0;

}