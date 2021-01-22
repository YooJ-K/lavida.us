#include <stdio.h>
#include <string.h>

int main() {


	int test;

	scanf("%d", &test);

	while (test--) {
		char ryu[30];

		scanf("%s", &ryu);

		int len = strlen(ryu);

		int sum = 0;

		for (int i = 0; i < len; i++) {
			sum += (ryu[i] - 96);
		}

		printf("%d\n", sum);
	}

}
