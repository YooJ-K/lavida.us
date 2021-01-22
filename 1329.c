#include <stdio.h>
#include <string.h>

int main() {
	

	int test,num=1;
	scanf("%d", &test);

	while (test--) {
		int pass;
		char word[1000] = { 0, };
		scanf("%d %s", &pass, word);

		int len = strlen(word);

		printf("%d ", num++);

		for (int i = 0; i < pass-1; i++) {
			printf("%c", word[i]);
		}
		for (int i = pass; i < len; i++) {
			printf("%c", word[i]);
		}

		printf("\n");
	}
  return 0;
}