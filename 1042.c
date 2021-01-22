#include <stdio.h>

int main(void)
{
 int test, mo, wo, my, wy;

 scanf("%d", &test);

 while(test--){

	 scanf("%d %d %d %d", &mo, &wo, &my, &wy);

	 if ( wo == 0 && wy == 0 && my >= 1)
		 printf("1\n");
	 else if ( wo >=1 || wy >=1)
		 printf("%d\n", wo + wy);
	 else if ( mo>=1 && wo == 0 && wy == 0 && my == 0)
		 printf("Not Attended\n");
 }

}