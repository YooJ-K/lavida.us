#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

	while (1) {

		char input[129];
		int virus[16][8], result[16] = { 0, };
		char qu[6];

		scanf("%s %s", qu, input);


		if (strcmp(qu, "NULL") == 0 && strcmp(input, "NULL") == 0) {
			break;
		}

		int k = 0;

		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < 8; j++) {
				virus[i][j] = input[k++] - 48;
			}
		}

		char save[16];
		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < 8; j++) {
				result[i] += pow(2, 7 - j) * virus[i][j];
			}
			save[i] = result[i];
		
		}
		

		char *a = NULL;
		a = strstr(save, qu);

		if (a != 0) {
			printf("Found!\n");
		}
		else {
			printf("Not found!\n");
		}


	}
}