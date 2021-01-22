#include <stdio.h>
#include <math.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {

		int ip[4], sum[4];
		char c;

		scanf("%d %c %d %c %d %c %d", &ip[0], &c, &ip[1], &c, &ip[2], &c, &ip[3]);

		for (int i = 0; i < 4; i++) {
			sum[i] = 0;
			int count = 0;

			while (ip[i] != 1 && ip[i] != 0) {

				sum[i] += (ip[i] % 2) * pow(10, count);
				ip[i] = ip[i] / 2;
				count++;
			}
			sum[i] += ip[i] * pow(10, count);


		}

		for (int i = 0; i < 4; i++) {
			printf("%08d", sum[i]);
		}

		printf("\n");

	}

	return 0;


}
