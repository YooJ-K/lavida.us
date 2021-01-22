#include <stdio.h>
#include <string.h>

typedef struct chaar {
	int num;
	int re;
	char cc[21];
}CH;

int main() {
	int test;
	CH co[1000];

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d %d %s", &co[i].num, &co[i].re, co[i].cc);
	}

	for (int i = 0; i < test; i++) {
		printf("%d ", co[i].num);
		int len = strlen(co[i].cc);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < co[i].re; k++) {
				printf("%c", co[i].cc[j]);
			}
		}

		printf("\n");
	}

	return 0;
}