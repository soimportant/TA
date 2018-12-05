#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int arr[], int s) {
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

int main() {
	int cases = 0;
	scanf("%d", &cases);
	int num[505] = { 0 };
	while (cases--) {
		int total;
		scanf("%d", &total);

		for (int i = 0; i < total; i++) {
			scanf("%d", &num[i]);
		}

		bubblesort(num, total);
		int Mid = total / 2;
		int diff = 0;

		for (int i = 0; i < total; i++) {
			diff += abs(num[Mid] - num[i]);
		}
		printf("%d\n", diff);
	}
	return 0;
}