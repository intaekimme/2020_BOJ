#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	int goal = 0;
	int val = 0;
	int pre_val = 0;
	int result = 0;
	int cnt = 0;
	int* arr = 0;

	scanf("%d %d", &n, &goal);

	arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	/*correct
	 *Algorithm modification
	 *explore for all cases
	 *n is less than 100
	 *Therefore, it can be performed within 1 second
	 */

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (k = 0; k < n; k++) {
				if (i != j && i != k && j != k) {
					val = arr[i] + arr[j] + arr[k];
					if (val <= goal) {
						if (pre_val == 0) {
							pre_val = val;
							result = val;
						}
						else {
							if (pre_val < val && val <= goal) {
								pre_val = val;
								result = val;
							}
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

//printf("%d %d %d %d\n",i, j, k, val);
//printf("%d %d %d %d %d\n",i, j, k, pre_val, result);