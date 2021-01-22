#include<stdio.h>

int main() {

	int i, sum, test;


	scanf("%d", &test);

	while (test--) {

		scanf("%d", &i);


		sum = i % 10 * 1000 + (i % 100 - i % 10) * 10 + (i % 1000 - i % 100) / 10 + i / 1000;


		if (sum >= i) {

			printf("%d\n", sum);
		}
		else {
			printf("%d\n", i);
		}
	}


	return 0;
}