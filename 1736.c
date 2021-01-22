#include <stdio.h>
#include <string.h>

struct JA {
	char menuName[21];
	int money;
};

int main(void) {

	int test;

	scanf("%d", &test);

	while (test--) {

		int price, menu, sum = 0;
		JA sa[30];
		char buy[21];

		scanf("%d %d", &menu, &price);

		for (int i = 0; i < menu; i++) {
			scanf("%s %d", sa[i].menuName, &sa[i].money);
		}

		for (int i = 0; i < price; i++) {
			scanf("%s", buy);

			for (int j = 0; j < menu; j++) {

				int o = strcmp(buy, sa[j].menuName);

				if (o == 0) {
					sum += sa[j].money;
				}
			}
		}

		printf("%d\n", sum);
	}

	return 0;
}