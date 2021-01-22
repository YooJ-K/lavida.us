#include <stdio.h>

int main()

{
	int a, b, c, d, sum1, sum2, test;

	scanf("%d", &test);

	while(test--){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum1 = a*c-b*d;
		sum2 = a*d+b*c;
		printf("%d %d\n", sum1, sum2);
	}

	return 0;
}