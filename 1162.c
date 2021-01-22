#include <stdio.h>

int main() {
	int arr[5];
	int len = sizeof(arr) / sizeof(int);
	int i,sum;

	int test;

	scanf("%d", &test);

	while (test--) {


		sum = 0;
		for (i = 0; i < len; i++) {
			scanf("%d", &arr[i]);

		}
		for (i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (arr[i] > arr[j]) {
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}

		for (i = 1; i < len - 1; i++) {
			sum += arr[i];
		}

		if (arr[3] - arr[1] >= 4) {
			printf("KIN\n");
		}

		else {

			printf("%d\n", sum);
		}
	}

	return 0;
	
}