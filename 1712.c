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
	
	break_even_point = fixed_cost;
	if (variable_cost > income) {
		printf("-1\n");
	}
	else {
		net_profit = income - variable_cost;
		while (break_even_point >= 0) {
			break_even_point = break_even_point - net_profit;
			cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;

}