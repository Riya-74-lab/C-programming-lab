#include <stdio.h>
int main()
{
	int a,b, sum;
	
	printf("Enter two integers");
	scanf("%d%d", &a,&b);
	
	//calculate the sum
	sum = a+b;
	
	printf("%d + %d = %d\n",a,b,sum);

	return 0;
}