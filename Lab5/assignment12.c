#include<stdio.h>
int main ()
{
	int n;
	printf("Even no.s between 1 to 100:\n");
	for(n=2;n<100;n++)
	{
	 if(n%2!=0)
	 printf("%d ",n);
    }
 return 0;
}