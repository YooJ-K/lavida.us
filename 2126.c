#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int deon, jeon;

		scanf("%d %d", &deon, &jeon);

		int level[7][20], twice[14];

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


		int max = twice[0];

		for (int i = 1; i < deon * 2; i++) {
			if (twice[i] > max) {
				max = twice[i];
			}
		}

		printf("%d\n", max);

		for (int i = 0; i < deon; i++) {
			printf("%d %d\n", twice[i], twice[i + deon]);
		}
	}

	return 0;
}