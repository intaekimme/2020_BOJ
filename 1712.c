#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int fixed_cost = 0;
	int variable_cost = 0;
	int income = 0;
	int net_profit = 0;
	int cnt = 0;
	int break_even_point = 0;

	scanf("%d %d %d", &fixed_cost, &variable_cost, &income);
	
	//런타임 에러
	break_even_point = fixed_cost;
	net_profit = income - variable_cost;

	if (net_profit < 0) {
		printf("-1\n");
	}
	else {
		cnt = break_even_point / net_profit;
		printf("%d\n", cnt + 1);
	}

	return 0;

}
