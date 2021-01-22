#include <stdio.h>

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {

		int p, people[20] = { 0, };

		scanf("%d", &p);

		for (int i = 0; i < p; i++) {
			scanf("%d", &people[i]);
		}

		int min;
		double sum = 0.0;

		for (int i = 0; i < p; i++) {
			sum += people[i];

		}

		sum = sum / p;
		

		min = people[0];

		for (int i = 1; i < p; i++) {
			/*
			평균값이 people[i]보다 큰 경우 / 작은 경우
				min의 값이 sum값 보다 큰 경우/ 작은 경우
			*/

			if (sum >= people[i]) {
				if (min >= sum) {
					if (sum - people[i] <= min - sum) {
						min = people[i];
					}
				}
				else {
					if (sum - people[i] <= sum - min) {
						min = people[i];
					}
				}
			}
			else {
				if (min >= sum) {
					if (people[i] - sum <= min - sum) {
						min = people[i];
					}
				}
				else {
					if (people[i] - sum <= sum - min) {
						min = people[i];
					}
				}
			}
		}


		printf("%d\n", min);
	}


	return 0;
}