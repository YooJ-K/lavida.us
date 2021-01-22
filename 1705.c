#include <stdio.h>

int main(void)
{
	int x;  
	int y;     
	
	int sum;

	scanf("%d %d", &x, &y);

	sum = x * y;
	printf("%d\n", sum); 
	
	return 0;  // 0을 외부로 반환
}