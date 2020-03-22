#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int number) {
	
	if (number == 0) {
		return 1;
	}
	else {
		return number* fact(number - 1);
	}
}

int main() {
	int n = 0;;
	
	scanf("%d", &n);
	
	printf("%d\n", fact(n));
	
	return 0;
}