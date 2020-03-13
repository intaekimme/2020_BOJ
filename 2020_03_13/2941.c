#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[101] = { 0, };
	int cnt = 0;
	int i = 0;

	scanf("%s", str);

	for (i = 0; str[i] != NULL; i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				cnt++;
				i = i + 1;
				continue;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == 'z' && str[i + 2] == '=') {
				cnt++;
				i = i + 2;
				continue;
			}
			else if (str[i + 1] == '-') {
				cnt++;
				i = i + 1;
				continue;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 'l' || str[i] == 'n') {
			if (str[i + 1] == 'j') {
				cnt++;
				i = i + 1;
				continue;
			}
			else {
				cnt++;
			}
		}
		else if (str[i] == 's' || str[i] == 'z') {
			if (str[i + 1] == '=') {
				cnt++;
				i = i + 1;
				continue;
			}
			else {
				cnt++;
			}
		}
		else {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}