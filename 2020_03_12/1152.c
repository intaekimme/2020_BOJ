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

	//���� �ϳ��� �Է¹޾��� �� : len = 2, cnt = 0 >>> 0
	//���� 1���� �Է¹޾��� �� : len = 2, cnt = 0 >>> 1
	//���� �ϳ�, �ܾ� �ϳ� : len > 2, cnt = 0; >>> 1
	//�� ��
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