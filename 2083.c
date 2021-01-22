#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {

		int i, q;

		scanf("%d", &i);



		for (int k = 0; k < i; k++) {
			for (int j = k; j < i - 1; j++) {
				printf(" ");
			}
			q = i;
			for (int u = 0; u <= k; u++) {

				printf("%d", q);
				q--;  // 마지막에 0만들어 버림
			}
			q = q + 2;
			for (int u = 0; u < k; u++) {

				printf("%d", q);

				if (q < i) {
					q++;
				}

			}

			printf("\n");
		}

		for (int k = 1; k < i; k++) {
			for (int u = 0; u < k; u++) {
				printf(" ");
			}
			q = i;
			for (int u = 0; u < i - k; u++) {
				printf("%d", q);
				q--;
			}
			q = q + 2;
			for (int u = 0; u < i - k - 1; u++) {
				printf("%d", q);
				q++;
			}

			printf("\n");
		}
	}

	return 0;
}