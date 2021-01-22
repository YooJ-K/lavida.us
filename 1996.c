#include <stdio.h>


int main() {

	int price, day, haru, test;

	scanf("%d", &test);

	while (test--) {

		scanf("%d", &price);

		haru = 2950;
		day = 0;

		while (1) {

			if (price > 0) {
				haru = haru + 50;

				price = price - haru;
			}

			else {
				break;
			}

			day++;
		}

		if (day > 100) {
			printf("NO\n");
		}
		else {

			printf("%d\n", day);
		}
	}

	return 0;
}