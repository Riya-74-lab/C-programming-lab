#include<stdio.h>
int main()
{
	float S , YS , FOS;
	printf("Enter applied stress(MPa):\n");
	scanf("%f",&S);
	printf("Enter yeild strength(MPa):)\n");
	scanf("%f",&YS);
	FOS=YS/S;
	printf("factor of safety= %f",FOS);
	if(FOS>2.0){
	
	  printf("\n Safe Design\n");
}
	else if(FOS>1.5 && FOS<2) {
		printf("\n Acceptable with monitering\n");
		
	}
	else{
		printf("\nDANGER!, Redesign needed\n");
	}
	
	return 0;
}