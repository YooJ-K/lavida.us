#include <stdio.h>

void main() {
	int n[100][100];
	int a, b;
	int test;

	scanf("%d", &test);

	while (test--) {

		scanf("%d %d", &a, &b);

		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				scanf("%d", &n[i][j]);
			}
		}

		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++) {
				printf("%d", n[j][i]);
				if (j < a - 1) {
					printf(" ");
				}
			}

			printf("\n");
		}
	}
}