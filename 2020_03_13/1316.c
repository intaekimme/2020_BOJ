#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void init(char str[]) {
	for (int i = 0; i < 101; i++) {
		str[i] = 0;
	}
}

int main() {
	char str[101] = { 0, };
	int group = 0;
	int n = 0;
	int exist = 0;
	int continous = 0;

	int i = 0;
	int j = 0;

	scanf("%d", &n);
	group = n;

	
	for (i = 0; i < n; i++) {
		scanf("%s", str);
		for (i = 0; str[i] != NULL; i++) {
			for (j = 0; str[j] != NULL; j++) {
				if (i != j && str[i] == str[j]) {
					exist = 1;
					if (j == i + 1 || j == i - 1) {
						continous = 1;
					}
					else {
						continous = 0;
						group--;
					}
				}
			}
		}
		init(str);
	}
	
	printf("%d\n", group);

	return 0;
}