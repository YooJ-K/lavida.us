#include <stdio.h>

int main(void)
{
	int x;  
	int y;     
	int z;
	int h;
	int o;
	int sum;

	scanf("%d %d %d %d %d", &x, &y, &z, &h, &o);

	sum =( x * x + y * y + z * z + h * h + o * o ) % 10;
	printf("%d\n", sum); 
	
	return 0;  // 0을 외부로 반환
}