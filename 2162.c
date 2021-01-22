#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int num[7] = { 0, };
		int myNum[6] = { 0, };
		int sum = 0;

		for (int i = 0;i < 7;i++) {
			scanf("%d", &num[i]);
		}

		for (int i = 0;i < 6;i++) {
			scanf("%d", &myNum[i]);
		}

		for (int i = 0;i < 6;i++) {
			for (int j = 0;j < 6;j++) {
				if (num[i] == myNum[j]) {
					sum++;
				}
			}
		}

		if (sum == 6) {
			printf("1\n");
		}
		else if (sum == 5) {
			for (int j = 0;j < 6;j++) {
				if (num[6] == myNum[j]) {
					sum++;
				}
			}

			if (sum == 6) {
				printf("2\n");
			}
			else {
				printf("3\n");
			}
		}
		else if (sum == 4) {
			printf("4\n");
		}
		else if (sum == 3) {
			printf("5\n");
		}
		else {
			printf("Fail\n");
		}

	}
	return 0;
}