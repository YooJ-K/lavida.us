#include <stdio.h>

int main()
{

	int a, b, c, d, e, f, g;
	int sum1, sum2;

	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

	sum1 = a + b + c + d + e + f + g;
	printf("%d\n", sum1);

	sum2 = (sum1 - sum1 % 7) / 7;
	printf("%d", sum2);

	return 0;
}