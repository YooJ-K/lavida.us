#include <stdio.h>
#include <string.h>

int main() {


	int test;

	scanf("%d", &test);

	while (test--) {
		char str[100];

		scanf("%s", &str);

		int len = strlen(str);

		for (int i = 0; i < len; i = i + 2) {
			printf("%c", str[i]);
		}

		for (int i = 1; i < len; i = i + 2) {
			printf("%c", str[i]);
		}
		printf("\n");
	}


	return 0;
}
