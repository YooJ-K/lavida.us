#include <stdio.h>


int main() {

	int test;

	scanf("%d", &test);

	while (test--) {

		int arr[100] = { 0, }, arr2[100] = { 0, };
		int num, result = 0, len;

		scanf("%d", &num);

		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
		}


		for (int i = 0; i < num - 1; i++) {
			for (int j = i + 1; j < num; j++) {
				if (arr[i] <= arr[j]) {
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
		int a = 0; // None을 출력하기 위해서
		for (int i = 0; i < num; i++) {
			if (arr[i] % 2 == 1) {
				printf("%d ", arr[i]);
				a++;
			}
		}

		if (a == 0) {
			printf("None");
		}


		printf("\n");
	}

	return 0;
}