#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000000

int main() {
	char str[MAX] = { 0, };
	int i = 0;
	int cnt = 0;
	int len = 0;

	fgets(str, MAX, stdin);

	for (i = 0; str[i] != 0; i++) {
		len++;
	}


	for (i = 0; str[i] != 0; i++) {
		if (str[i] == 32) {
			if (i == 0 && str[i] == 32) {
				continue;
			}
			if (i == len - 2 && str[i] == 32) {
				continue;
			}
			else {
				cnt++;
			}
		}
	}

	printf("%d\n", cnt + 1);

	return 0;
}