/* 두 개의 숫자의 합을 계산하는 프로그램 */
#include <stdio.h>

int main(void)
{
	int x;     // 첫 번째 정수를 저장할 변수
	int y;     // 두 번째 정수를 저장할 변수
	int sum;   // 두 정수의 합을 저장하는 변수

	scanf("%d %d", &x, &y);  // 하나의 정수를 받아서 x에 저장

	sum = x + y;  // 변수 2개를 더한다.
	printf("%d\n", sum);  // sum의 값을 10 진수 형태로 출력
	
	return 0;  // 0을 외부로 반환
}