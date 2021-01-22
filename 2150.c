#include <stdio.h>
#include <string.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int x1, y1;
		char go[80];

		scanf("%d %d", &x1, &y1);
		scanf("%s", &go);

		int len = strlen(go);

		for (int i = 0; i < len; i++) {
			if (go[i] == '1')
				y1++;
			else if (go[i] == '2') {
				y1++;
				x1++;
			}
			else if (go[i] == '3')
				x1++;
			else if (go[i] == '4') {
				x1++;
				y1--;
			}
			else if (go[i] == '5') {
				y1--;
			}
			else if (go[i] == '6') {
				x1--;
				y1--;
			}
			else if (go[i] == '7')
				x1--;
			else if (go[i] == '8') {
				x1--;
				y1++;
			}

		}

		printf("%d %d\n", x1, y1);
	}
	return 0;
}