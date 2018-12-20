#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char str1[1005] = { 0 };
	char str2[1005] = { 0 };

	while (gets(str1)) {
		gets(str2);

		int t1[26] = { 0 }, t2[26] = { 0 };

		for (int i = 0; i < strlen(str1); i++) {
			t1[str1[i] - 'a']++;
		}
		for (int i = 0; i < strlen(str2); i++) {
			t2[str2[i] - 'a']++;
		}

		for (int i = 0; i < 26; i++) {
			int Min = t1[i] < t2[i] ? t1[i] : t2[i];
			for (int j = 0; j < Min; j++) {
				printf("%c", 'a' + i);
			}
		}
		printf("\n");
	}


	return 0;
}