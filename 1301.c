#include <stdio.h>
#include <string.h>

typedef struct input {
	char word[17];
	int score;
}input;

int main() {
	input in[1000];
	int mun, say;
	

	scanf("%d %d", &say, &mun);

	for (int i = 0; i < say; i++) {
		scanf("%s %d", in[i].word, &in[i].score);
	}
	

	for (int i = 0; i < mun; i++) {

		int sum = 0; // 점수매기기용

		while(1){
			char munz[17]; // 단어 입력받기
			scanf("%s", munz);

			if (strcmp(munz,".")==0) {// . 일경우에는 이 반복문 종료
				break;
			}

			for (int j = 0; j < say; j++) {
				int result = strcmp(munz, in[j].word); // 아니면 munz랑 사전 단어 비교

				if (result == 0) { // strcmp 같으면 0 반환
					sum += in[j].score; // 점수 쁘라스
					break; // 끝
				}
			}

			
		}

		printf("%d\n", sum);
		// 점수 출력
		
	}

	return 0;

}