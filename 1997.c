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

		int price, menu, sum = 0, paper, s1, s5, s10;
		struct JA sa[30];
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

		int sum3;

		if (sum % 1000 != 0) {
			sum3 = sum / 1000;
			sum3 += 1;
			sum3 = sum3 * 1000;
		}
		else {
			sum3 = sum;
		}

		s10 = sum3 / 10000;
		s5 = sum3 / 5000 - s10 * 2;
		s1 = sum3 / 1000 - (s5 * 5 + s10 * 10);



		paper = s10 + s5 + s1;

		int input = sum / 1000;

		if (sum % 1000 != 0)
			input++;

		int ininput = input * 1000 - sum;

		int d5, d1;

		d5 = ininput / 500;
		d1 = ininput / 100 - 5 * d5;

		int sum2 = d1 + d5;


		printf("%d %d %d %d %d\n", sum, input * 1000, paper, ininput, sum2);
	}

	return 0;

}