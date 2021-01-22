#include <stdio.h>
#include <string.h>

typedef struct word {
	char words[26];
	int score;
}word;

int main() {

	int test;

	scanf("%d", &test);

	while (test--) {
		int wordSu, sentence;
		word W[10];

		scanf("%d %d", &wordSu, &sentence);

		for (int i = 0; i < wordSu; i++) {
			scanf("%s %d", W[i].words, &W[i].score);
		}

		for (int j = 0; j < wordSu; j++) {

			int len = strlen(W[j].words);

			for (int i = 0; i < len; i++) {
				if (W[j].words[i] >= 65 && W[j].words[i] <= 90) {
					W[j].words[i] += 32;
				}
			}

		}

		for (int i = 0; i < sentence; i++) {

			int sum = 0;

			while (1) {

				char al[26];
				scanf("%s", al);

				if (strcmp(al, ".") == 0)
					break;

				int len = strlen(al);

				for (int j = 0; j < len; j++) {
					if (al[j] >= 65 && al[j] <= 90) {
						al[j] += 32;
					}
				}

				int count = 0;

				for (int j = 0; j < wordSu; j++) {



					if (strcmp(W[j].words, al) == 0) {
						sum -= W[j].score;
					}
					else {
						count++;

					}
				}


				if (count == wordSu) {
					sum += len%10;
				}


			}

			printf("%d\n", sum);
		}
	}

	return 0;


}