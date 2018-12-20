#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char ch;
	int flag = 0;
	while (scanf("%c", &ch) != EOF) {
		if (ch == '\"') {
			if (flag % 2 == 0)
				printf("``");
			else
				printf("''");
			flag++;
		}
		else {
			printf("%c", ch);
		}
	}
	//system("PAUSE");
	return 0;
}