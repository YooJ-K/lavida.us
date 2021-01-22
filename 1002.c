#include <stdio.h>
#include <string.h>

int main() {
	char yeol[80] = {0,};

	scanf("%s", &yeol);

	int len = strlen(yeol);

	for (int i = 0; i < len; i++) {
		if (yeol[i] == '%') {
			if (i + 1 >= len) {
				printf("%%");
			}
			else if (yeol[i + 1] == '2') {
				if (i + 2 >= len) {
					printf("%2");
				}
				else if (yeol[i + 2] == '0') {
					printf(" ");
				}
				else if (yeol[i + 2] == '1') {
					printf("!");
				}
				else if (yeol[i + 2] == '4') {
					printf("$");
				}
				else if (yeol[i + 2] == '5') {
					printf("%%");
				}
				else if (yeol[i + 2] == '8') {
					printf("(");
				}
				else if (yeol[i + 2] == '9') {
					printf(")");
				}
				else if (yeol[i + 2] == 'a') {
					printf("*");
				}
				else {
					printf("%%2%c", yeol[i + 2]);
				}

				i = i + 2;
			}
			else {
				printf("%c", yeol[i + 1]);
			}
		}

		else {
			printf("%c", yeol[i]);
		}
	}

	printf("\n");

	return 0;
}
