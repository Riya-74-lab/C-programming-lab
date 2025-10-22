#include<stdio.h>

int main()
{
    int n;
    printf("Enter integer(n): \n");
    scanf("%d",&n);
    
    if (n%5==0 && n%11==0)
    {
         
         printf("%d is divisible by both 5 and 11",n);
    }
    else if(n%5==0) {
        printf("%d is divisible by 5 but not by 11",n);
    }
    else if(n%11==0){
        printf("%d is divible by 11 but not by 5",n);
    }
    else{
        printf("%d is divisible by neither 11 or 5",n);
    }
    
    return 0;
}