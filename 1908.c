#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int deon, jeon;

		scanf("%d %d", &deon, &jeon);

		int level[10][10], twice[20];

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

		for (int i = 0; i < 2*deon - 1; i++) {
			for (int j = i + 1; j < 2*deon; j++) {
				if (twice[i] < twice[j]) {
					int tmp = twice[i];
					twice[i] = twice[j];
					twice[j] = tmp;
				}
			}
		}

		for (int i = 0; i < 2*deon; i++) {
			printf("%d", twice[i]);

			if (i != 2*deon - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}
}