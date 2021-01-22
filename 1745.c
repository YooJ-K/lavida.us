#include <stdio.h>

int main(void)
{
	int n, m;

	while (1) {
		scanf("%d %d", &n, &m);

		if (n == 0 && m == 0)
			break;
		else if (n%m == 0)
			printf("multiple\n");
		else if (n%m != 0)
			printf("%d\n", n%m);
	}

}

