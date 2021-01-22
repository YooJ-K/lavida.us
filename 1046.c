#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		char a[4] = { 0, }, b[4] = { 0. };
		int ball = 0, strike = 0;

		scanf("%s %s", a, b);

		for (int i = 0; i < 3; i++) {
			if (a[i] == b[i]) {
				strike++;
			}
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (a[i] == b[j]) {
					ball++;
				}
			}
		}

		ball = ball - strike;

		printf("%dS %dB\n", strike, ball);
	}

	return 0;
}