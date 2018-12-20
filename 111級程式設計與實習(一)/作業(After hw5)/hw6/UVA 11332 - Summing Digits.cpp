#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int func(int num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	int num = 0;
	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;
		while (num >= 10) {
			num = func(num);
		}
		printf("%d\n", num);
	}
	return 0;
}