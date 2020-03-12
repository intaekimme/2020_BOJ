#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000002

int main() {
	char str[MAX] = { 0, };
	int i = 0;
	int tap = 0;
	int word = 0;
	int len = -1;

	fgets(str, MAX, stdin);

	for (i = 0; str[i] != 0; i++) {
		len++;
	}

	for (i = 0; str[i] != 0; i++) {
		if (str[i] == 32) {
			tap++;
		}
	}

	word = tap + 1;

	if (len == tap) {
		word = 0;
		printf("%d\n", word);
	}
	else {
		if (str[0] == 32) {
			word--;
		}
		if (str[len - 1] == 32) {
			word--;
		}
		printf("%d\n", word);
	}

	return 0;
}