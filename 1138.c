#include <stdio.h>
#include <string.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {


		char n1[100], n2[100];

		scanf("%s %s", n1, n2);

		int len1 = strlen(n1);
		int len2 = strlen(n2);
		int len;

		if (len1 >= len2) {
			for (int i = len2; i < len1; i++) {
				n2[i] = '@';
			}
			len = len1;
		}
		else {
			for (int i = len1; i < len2; i++) {
				n1[i] = '@';
			}
			len = len2;
		}

		int sum = 0;

		for (int i = 0; i < len; i++) {
			sum += (n1[i] - n2[i])*(n1[i] - n2[i]);
		}

		sum = sum / len;


		printf("%d\n", sum);
	}

	return 0;
}