#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int Count(int num) {
	int t = 0;
	while (num != 1) {
		if (num % 2 == 1)
			num = 3 * num + 1;
		else
			num = num / 2;
		t++;
	}
	return t + 1;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int Max_time = -1;
		printf("%d %d ", a, b); //先輸出 以免要交換

		if (a > b) //為了方便使用for loop
			swap(&a, &b);
			
		for (int i = a; i <= b; i++) {
			int c = Count(i);
			if (c > Max_time)
				Max_time = c;
		}

		printf("%d\n", Max_time);
	}
	return 0;
}