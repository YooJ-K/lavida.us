#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int pass[4];
	int i = 0;
	
	scanf("%s", str);

	for (int i = 0; i < 4; i++) {
		scanf("%d", &pass[i]);
	}

	for (int i = 0; i < 4; i++) {
		int j = pass[i];
		printf("%c", str[j]);
	}

	printf("\n");

	return 0;
}
