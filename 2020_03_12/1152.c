#include <stdio.h>
#define MAX 1000000

int main() {
	char str[MAX] = { 0, };
	int i = 0;
	int cnt = 0;

	fgets(str, MAX, stdin);

	for (i = 0; str[i] != 0; i++) {
		if (str[i] == 32) {
			cnt++;
		}
	}

	printf("%d\n", cnt + 1);

	return 0;
}