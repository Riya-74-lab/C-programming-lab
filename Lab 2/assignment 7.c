#include<stdio.h>
int main()
{
	float a, f;
	printf("Enter vibration amplitude(mm):\n");
	scanf("%f",&a);
	printf("Enter frequency(Hz);\n");
	scanf("%f",&f);
	if(a>0.5 && (f>20 && f<50)) {
	 printf("\n HIGH RISK!!\n");
	}
	else if(a>0.5 && f>60) {
		printf("\n MEDIUM RISK!\n");
	}
	else{
		printf("\n LOW RISK \n");
    }
    
    return 0;
}
	
	