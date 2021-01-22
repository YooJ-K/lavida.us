#include <stdio.h>
#define MAX 10

int main() {
	int i, j, a, b, test;
	int x, y;
	int n[MAX][MAX], m[MAX][MAX];


	scanf("%d", &test);

	while (test--) {
		scanf("%d %d", &i, &j);

		for (a = 0; a < i; a++) {
			for (b = 0; b < j; b++) {
				scanf("%d", &n[b][a]);
			}
		}

		scanf("%d %d", &x, &y);

		for (a = 0; a < x; a++) {
			for (b = 0; b < y; b++) {
				scanf("%d", &m[b][a]);
			}
		}

		if (x == i&&y == j) {

			for (a = 0; a < i; a++) {
				for (b = 0; b < j; b++) {
					m[b][a] += n[b][a];
					printf("%d", m[b][a]);

					if (b<j-1){
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		else {
			printf("Impossible\n");
		}
	}

	return 0;


}