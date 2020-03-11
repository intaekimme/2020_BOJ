#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void init(float* x, int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		x[i] = 0;
	}
}

float computation(float count) {
	float* tmp = 0;
	int i = 0;
	float sum = 0;
	float avg = 0;
	float cnt = 0;
	float ratio = 0;

	tmp = (float*)malloc(sizeof(float) * count);
	for (i = 0; i < count; i++) {
		 scanf("%f", &tmp[i]);
		 sum += tmp[i];
	}

	avg = sum / count;

	for (i = 0; i < count; i++) {
		if (tmp[i] > avg) {
			cnt++;
		}
	}

	ratio = (cnt / count) * 100;
	free(tmp);
	return ratio;

}

int main() {
	int total_case = 0;
	float each_case = 0;
	int i = 0;
	float* buffer = 0;
	scanf("%d", &total_case);

	buffer = (float*)malloc(sizeof(float) * total_case);
	init(buffer, total_case);

	for (i = 0; i < total_case; i++) {
		scanf("%f", &each_case);
		buffer[i] = computation(each_case);
	}

	for (i = 0; i < total_case; i++) {
		printf("%.3f%%\n", buffer[i]);
	}

	free(buffer);
	return 0;

}