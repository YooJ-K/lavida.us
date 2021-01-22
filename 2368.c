#include <stdio.h>
#define MAX 10

int main() {
	int i, j, a, b, test;
	int x, y;
	int n[MAX][MAX], m[MAX][MAX];


	scanf("%d", &test);

	while (test--) {
		int sum = 0;
		scanf("%d %d", &i, &j);

		for (a = 0; a < i; a++) {
			for (b = 0; b < j; b++) {
				scanf("%d", &n[a][b]);
			}
		}

		scanf("%d %d", &x, &y);

		for (a = 0; a < x; a++) {
			for (b = 0; b < y; b++) {
				scanf("%d", &m[a][b]);
			}
		}

		if (x == i && y == j) {

			for(a = 0; a < i; a++) {
				for (b = 0; b < j; b++) {
					if (n[a][b] == m[a][b]) {
						sum++;
					}
				}
			}

			if (sum != a*b) {

				for (a = 0; a < i; a++) {
					for (b = 0; b < j; b++) {
						n[a][b] -= m[a][b];
						printf("%d", n[a][b]);

						if (b < j - 1) {
							printf(" ");
						}
					}
					printf("\n");
				}
			}
			else {
				printf("Identical\n");
			}
		}
		
		else {
			printf("Impossible\n");
		}
	}

	return 0;


}