#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, V;
	int day;

	scanf("%d %d %d", &A, &B, &V);
	day = (V - B - 1) / (A - B) + 1;
	printf("%d\n", day);
	return 0;

}