#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char str[16] = { 0, };
	int arr[16] = { 0, };
	int i = 0;
	int time = 0;
	scanf("%s", str);

	for (i = 0; str[i] != NULL; i++) {
		if (65 <= str[i] && str[i] <= 67) {
			arr[i] = 3;
		}
		else if (68 <= str[i] && str[i] <= 70) {
			arr[i] = 4;
		}
		else if (71 <= str[i] && str[i] <= 73) {
			arr[i] = 5;
		}
		else if (74 <= str[i] && str[i] <= 76) {
			arr[i] = 6;
		}
		else if (77 <= str[i] && str[i] <= 79) {
			arr[i] = 7;
		}
		else if (80 <= str[i] && str[i] <= 83) {
			arr[i] = 8;
		}
		else if (84 <= str[i] && str[i] <= 86) {
			arr[i] = 9;
		}
		else if (87 <= str[i] && str[i] <= 90) {
			arr[i] = 10;
		}
	}

	for (i = 0; arr[i] != 0; i++) {
		time += arr[i];
	}
	
	printf("%d\n", time);
}