#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int nn, ban, ban1;

		scanf("%d", &nn);

		ban = nn / 2;
		ban1 = ban;

		if (nn % 2 == 1) {
			ban++;
		}

		for (int i = 0; i < ban; i++) {
			for (int j = 0; j < ban; j++) {
				if (i >= j) {
					printf("%d", j + 1);
				}
				else {
					printf("%d", i + 1);
				}
			}

			for (int j = ban1; j > 0; j--) {
				if (i < j) {
					printf("%d", i + 1);
				}
				else {
					printf("%d", j);
				}
			}
			printf("\n");
		}
		
		for (int i = ban1; i > 0; i--) {


			for (int j = 0; j < ban; j++) {
				if (i <= j) {
					printf("%d", i);
				}
				else {
					printf("%d", j + 1);
				}
			}


			for (int j = ban1; j > 0; j--) {
				if (i >= j) {
					printf("%d", j);
				}
				else {
					printf("%d", i);
				}
			}

			printf("\n");
		}

		printf("\n");

	}

	return 0;
}