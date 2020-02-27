#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int goal = 0;
	int val = 0;
	int distance = 0;
	int result = 0;
	int cnt = 0;
	int* arr = 0;

	scanf("%d %d", &n, &goal);

	arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n - 2; i++) {
		for (j = n - 1; j > i; j--) {
			if (j - 1 != i) {
				val = arr[i] + arr[j] + arr[j - 1];
				printf("%d : %d %d %d %d\n", cnt, i, j, j - 1, val);
				cnt++;
				if (val <= goal) {
					if (distance == 0) {
						distance = goal - val;
						result = val;
						printf("%d %d %d %d %d\n", i, j, j - 1, distance, result);
					}
					else {
						if (goal - val < distance) {
							distance = goal - val;
							result = val;
							printf("%d %d %d %d %d\n", i, j, j - 1, distance, result);
						}
					}
				}
			}
		}
	}
	
	printf("%d\n", result);

	free(arr);

	return 0;
}

//printf("%d %d %d %d %d\n", i, j, j - 1, distance, result);