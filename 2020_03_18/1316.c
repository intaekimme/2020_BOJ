#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void init(char str[],int length) {
	for (int i = 0; i <= length; i++) {
		str[i] = 0;
	}
}

int main() {
	int n = 0;
	int cnt = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int start = 0;
	int end = 0;
	int len = 0;

	char str[100] = { 0, };
	char* same = 0;

	scanf("%d", &n);
	cnt = n;
	
	for (i = 0; i < n; i++) {
		//printf("=========================\n");
		//printf("=========================\n");
		scanf("%s", str);
		len = strlen(str);
		/*for (j = 0; j < len; j++) {
			printf("[%d]%c ", j, str[j]);
		}
		printf("\n");
		*/
		for (j = len - 1; j > 0; j--) {
			//printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
			//printf("[%d] test : %c\n",j, str[j]);
			for (k = 0; k < j; k++) {
				if (str[j] == str[k]) {
					//printf("[%d] %c same!!\n",k, str[k]);
					same = str[k];
					end = j;
					for (start = k + 1; start < end; start++) {
						//printf("------------------------\n");
						//printf("%s : [%d] %c\n", str, k + 1, str[k + 1]);
						if (str[start] != same) {
							//printf("minus!!\n");
							cnt--;
							j = -1;
							break;
						}
					}
				}
				else {
					//printf("[%d] not same %c\n",k, str[k]);
				}
			}
		}

		init(str, len);
	}
	printf("%d\n", cnt);
	return 0;

}