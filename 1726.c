#include <stdio.h>

int main() {

	int a, b, test, sum;

	scanf("%d", &test);

	while (test--) {

		scanf("%d %d", &a, &b);

		sum = a / 100 + (a / 10 - a / 100 * 10) + a - a / 10 * 10+ b / 100 + (b / 10 - b / 100 * 10) + b - b / 10 * 10;

		sum = sum / 10 + sum % 10;

		printf("%d\n", sum);

	}

	return 0;

}