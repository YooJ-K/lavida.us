#include <stdio.h>
#include <string.h>

int main() {
	
	int test;
	scanf("%d", &test);

	while (test--) {

		int x, y;
		char str[50];

		scanf("%d %d", &x, &y);
		scanf("%s", &str);

		int len = strlen(str);

		for (int i = 0; i < len; i++) {
			if (str[i] == 'L') {
				x = x - 1;
			}
			else if (str[i] == 'R') {
				x = x + 1;
			}
			else if (str[i] == 'D') {
				y = y - 1;
			}
			else if (str[i] == 'U') {
				y = y + 1;
			}
		}

		printf("%d %d\n", x, y);
	}

	return 0;
}
