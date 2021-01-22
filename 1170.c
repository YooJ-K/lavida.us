#include <stdio.h>

int main() {

	int a, b, c, sum, max;
	int test;

	max = 0;

	scanf("%d", &test);

	while (test--) {


		scanf("%d %d %d", &a, &b, &c);

		if (a == b && b == c) {
			sum = 10000 + a * 1000;
		}
		else if (a != b && b != c && c != a) {
			if (a >= b) {
				if (a >= c) {
					sum = a * 100;
				}
				else {
					sum = c * 100;
				}
			}
			else if (b >= a) {
				if (b >= c) {
					sum = b * 100;
				}
				else {
					sum = c * 100;
				}
			}
		}
		else {
			if (a == b) {
				sum = 1000 + 100 * a;
			}
			else if (b == c) {
				sum = 1000 + 100 * c;
			}
			else {
				sum = 1000 + 100 * a;
			}
		}

		if (sum >= max) {
			max = sum;
		}

	}

	

	printf("%d\n", max);

	return 0;

}