#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int warp(int dist) {
	long long n, minN, powN, maxN, warpCount = 0;
	for (n = 1;; n++) {
		powN = n * n;
		minN = powN - n + 1;
		maxN = powN + n;
		if (minN <= dist && dist <= maxN) {
			if (minN <= dist && dist <= powN) warpCount = (n << 1) - 1;
			else warpCount = n << 1;
			break;
		}
	}

	return warpCount;
}


int main() {
	int t = 0;
	int i = 0;
	int x = 0;
	int y = 0;
	int distance = 0;
	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d %d", &x, &y);
		distance = y - x;
		printf("%d\n", warp(distance));
	}
	return 0;
}