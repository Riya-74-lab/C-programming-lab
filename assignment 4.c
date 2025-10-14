#include<stdio.h>
int main()
{
	float S1,S2;
	printf("Enter the first tensile Stregth(in MPa):\n");
	scanf("%f",&S1);
	printf("Enter the second tensile Strength(in MPa):\n");
	scanf("%f",&S2);
	if(S1>S2)
	  printf("%f is greater than %f",S1,S2);
	else if(S1<S2)
	 printf("%f is smaller than %f",S1,S2);
	else
	 printf("%f = %f",S1,S2); 
	 
	 return 0;
}