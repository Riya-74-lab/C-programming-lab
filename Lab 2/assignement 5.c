#include<stdio.h>
int main()
{
	float T;
	printf("Enter the machine temperature(in Celsius):\n");
	scanf("%f",&T);
	if (60<T && T<80) {
		printf("In Safe range");
	} else {
		printf("WARNING!");
	}
	
	return 0;
}