#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int deon, jeon;

		scanf("%d %d", &deon, &jeon);

		int level[12][15], twice[30];

		for (int i = 0; i < deon; i++) {
			for (int j = 0; j < jeon; j++) {
				scanf("%d", &level[i][j]);
			}
		}


		for (int i = 0; i < deon; i++) {

			int max = 0;
			int min = 501;

			for (int j = 0; j < jeon; j++) {
				if (level[i][j] > max) {
					max = level[i][j];
				}
				if (level[i][j] < min) {
					min = level[i][j];
				}
			}

			twice[i] = max;
			twice[i + deon] = min;

		}

		int twice2[30];

		for (int i = 0; i < deon; i++) {
			twice2[i] = twice[i];
		}

		for (int i = 0; i < 2 * deon - 1; i++) {
			for (int j = i+1; j < 2 * deon; j++) {
				if (twice[i] < twice[j]) {
					int tmp = twice[i];
					twice[i] = twice[j];
					twice[j] = tmp;
				}
			}
		}

		printf("%d %d\n", twice[0], twice[2 * deon - 1]);


		for (int i = 0; i < deon - 1; i++) {
			for (int j = i+1; j < deon; j++) {
				if (twice2[i] > twice2[j]) {
					int tmp = twice2[i];
					twice2[i] = twice2[j];
					twice2[j] = tmp;
				}
			}
		}

		for (int i = 0; i < deon; i++) {
			printf("%d", twice2[i]);

			if (i != deon - 1) {
				printf(" ");
			}
			else {
				printf("\n");
			}
		}
    }
  
  return 0;
}