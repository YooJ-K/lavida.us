#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int nn, ban, ban1, result;

		scanf("%d", &nn);

		ban = nn / 2;
		ban1 = ban;

		if (nn % 2 == 1) {
			ban++;
		}

		for (int i = 0; i < ban; i++) {
			for (int j = 0; j < ban; j++) {
				if (i >= j) {
					result = j + 65;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
				else {
					result = i + 65;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
			}

			for (int j = ban1; j > 0; j--) {
				if (i < j) {
					result = i + 65;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
				else {
					result = j + 64;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
			}
			printf("\n");
		}

		for (int i = ban1; i > 0; i--) {


			for (int j = 0; j < ban; j++) {
				if (i <= j) {
					result = i + 64;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
				else {
					result = j + 65;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
			}


			for (int j = ban1; j > 0; j--) {
				if (i >= j) {

					result = j + 64;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
				else {

					result = i + 64;

					if (result == 68)
						result = 71;
					else if (result == 69)
						result = 74;
					else if (result == 70)
						result = 76;
					else if (result == 71)
						result = 77;
					else if (result == 72)
						result = 80;
					else if (result == 73)
						result = 84;

					printf("%c", result);
				}
			}

			printf("\n");
		}

		printf("\n");

	}

	return 0;
}