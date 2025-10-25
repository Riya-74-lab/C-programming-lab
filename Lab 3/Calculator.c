#include<stdio.h>
int main()
{
	char op;
	float a,b,result;
	printf("Enter + for Addition\n");
	printf("Enter - for subtraction\n");
	printf("Enter * for multiplication\n");
	printf("Enter / for division\n");
	printf("Enter an operation:\n");
	scanf("%c",&op);
	
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	
	switch(op){
		
		case'+':
			result=a+b;
			printf("%f",result);
			break;
		
		case'-':
			result=a-b;
			printf("%f",result);
			break;	
			
		case'*':
			result=a*b;
			printf("%f",result);
			break;	
			
		case'/':
			result=a/b;
			if(b==0){
				printf("division by 0 is not possible");
			}
			printf("%f",result);
			break;
			
		default:
		printf("invalid output");
			
	}
	return 0;
}
