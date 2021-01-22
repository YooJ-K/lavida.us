#include <stdio.h>


int main() {

	int test;

	scanf("%d", &test);

	while (test--) {

		int num, find, input[100] = { 0, };

		scanf("%d", &num);

		for (int i = 0; i < num; i++) {
			scanf("%d", &input[i]);
		}

		scanf("%d", &find);

		int result = 0;

		for (int i = 0; i < num; i++) {
			if (find == input[i]) {
				result++;
			}
		}

		if (result == 0) {
			printf("None\n");
		}
		else {
			printf("%d\n", result);
		}

	}

	return 0;
}