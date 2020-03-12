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
			else if (i == len - 2 && str[i] == 32) {
				continue;
			}
			else {
				cnt++;
			}
		}
	}

	//공백 하나만 입력받았을 때 : len = 2, cnt = 0 >>> 0
	//문자 1개만 입력받았을 때 : len = 2, cnt = 0 >>> 1
	//공백 하나, 단어 하나 : len > 2, cnt = 0; >>> 1
	//그 외
	if (str[0] == 32 && len == 2 && cnt == 0) {
		printf("%d\n", cnt);
	}
	else if (str[0] != 32 && len == 2 && cnt == 0) {
		cnt++;
		printf("%d\n", cnt);
	}
	else if (len > 2 && cnt == 0) {
		cnt++;
		printf("%d\n", cnt);
	}
	else {
		cnt++;
		printf("%d\n", cnt);
	}

	return 0;
}