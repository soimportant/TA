#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	long long int a, b;
	while (1) {
		scanf("%lld %lld", &a, &b);
		if (!a && !b)
			break;

		int total = 0, flag = 0;

		while (a || b) {
			if (a % 10 + b % 10 + flag >= 10) {
				flag = 1;
				total++;
			}
			else {
				flag = 0;
			}
			a /= 10;
			b /= 10;
		}

		if (total == 0) {
			printf("No carry operation.\n");
		}
		else if (total == 1) {
			printf("1 carry operation.\n");
		}
		else {
			printf("%d carry operations.\n", total);
		}
	}
	return 0;
}