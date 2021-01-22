#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {

		char input[129];
		int virus[16][8], result[16] = { 0, };

		scanf("%s", input);

		int k = 0;

		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < 8; j++) {
				virus[i][j] = input[k++] - 48;
			}
		}

		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < 8; j++) {
				result[i] += pow(2, 7 - j) * virus[i][j];
				(char)result[i];
			}
		}

		char compare[7] = "SHBaek";
		char com[7];

		int t = 1;

		for (int i = 0; i < 16; i++) {
			if (result[i] == 'S') {
				if (i + 5 < 16) {
					com[6] = NULL;
					for (int j = 0; j < 6; j++) {

						com[j] = result[i++];
					}

					t = strcmp(com, compare);
				}
			}
		}

		if (t == 0) {
			printf("VIRUS_ALERT!\n");
		}
		else {
			printf("NORMAL\n");
		}
	}
	return 0;
}