#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter number(n): \n");
    scanf("%d",&n);
    
    if (n>0){
         sum=n*(n+1)/2;
         printf("Sum of %d is %d",n,sum);
    }
    else{
        printf("%d is not a natural number",n);
    }
    
    return 0;
}