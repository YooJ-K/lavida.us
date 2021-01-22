#include <stdio.h>

typedef struct lotte {
	char name[16];
	int age;
	char position[21];
	int backNum;
}lotte;

int main() {
	int n, oldest = 0,a,youngest=100,b;
	long long int sum = 0;
	lotte sun[15];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %d %s %d", sun[i].name, &sun[i].age, sun[i].position, &sun[i].backNum);

		if (oldest <= sun[i].age) {
			oldest = sun[i].age;
			a = i;
		}

		if (youngest >= sun[i].age) {
			youngest = sun[i].age;
			b = i;
		}
	}

	for (int i = 0; i < n; i++) {
		sum += sun[i].age;
	}

	sum = sum / n;

	printf("average age : %d\n", sum);

	printf("the oldest : %s %s %d\n", sun[a].name,sun[a].position, sun[a].backNum);

	printf("the youngest : %s %s %d\n", sun[b].name, sun[b].position, sun[b].backNum);

	return 0;
}