#include <stdio.h>
#include <string.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		char subs[101], seq[101];

		scanf("%s %s", seq, subs);

		int len1 = strlen(seq);
		int len2 = strlen(subs);
		int check = 0;
		int count = 0;

		for (int i = 0; i < len2; i++) {
			for (int j = check; j < len1; j++) {
				if (seq[j] == subs[i]) {
					check = j + 1;
					count++;
					break;
				}
			}
		}

		if (count == len2) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}