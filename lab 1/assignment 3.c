#include<stdio.h>
int main()
{
    float F,M,A;
    printf("enter mass value(in Kg)\n");
    scanf("%f",&M);
    printf("enter acceleration value(in m/s^2)\n");
    scanf("%f",&A);
    F=M*A;
    printf("Force=%f",F);

	
	return 0;
}