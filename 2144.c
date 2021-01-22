#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int IsPrime(int n) {

	int i, limit;

	if (n <= 1) return 0;
	if (n == 2) return 1;
	if (n % 2 == 0) return 0;

	limit = (int)sqrt((double)n);

	for (i = 3; i <= limit; i = i + 2) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {

	int test;

	scanf("%d", &test);

	while (test--) {

		int min,max,i, a, b, prime, sum, q;

		min = 1000001;
		max = 0;
		sum = 0;

		scanf("%d %d", &a, &b);

		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}

		for (i = a; i <= b;i++) {
			if (IsPrime(i) == 1 && i>9) {
				int result = 0;
				if (i == 100000) {
					result = 1;
				}
				else if (i >= 10000) {
					result += i / 10000 + i % 10000 / 1000 * 10;
					result += i % 1000 / 100 * 100 + i % 100 / 10 * 1000;
					result += i % 10 * 10000;
				}
				else if (i >=1000&&i<10000) {
					result += i / 1000 + i % 1000 / 100 * 10;
					result += i % 100 / 10 * 100;
					result += i % 10 * 1000;
				}
				else if (i >=100&& i<1000) {
					result = i / 100 + i % 100/10 * 10 + i % 10 * 100;
				}
				else if (i >=10&& i<100) {
					result = i / 10 + i % 10 * 10;
				}

				if (IsPrime(result) == 1 && i != result) {
					sum++;
					
					if (max <= i) {
						max = i;
					}
					if (min >= i) {
						min = i;
				}

				
				}
				
			}
			
		}

		if (sum == 0) {
			printf("0 0 0\n");
		}
		else {

			printf("%d %d %d\n", max, min, sum);
		}
	}


	return 0;

}


