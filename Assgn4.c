#include<stdio.h>

int main()
{
    float unit,bill;
    printf("Enter units consumed: \n");
    scanf("%f",&unit);
    
    if (unit<=100){
         bill=unit*1.5;
         printf("Bill=Rs. %f",bill);
    }
    else if(unit<=200 && unit>=101){
         bill=((unit-100)*2) + (100*1.5);
         printf("Bill=Rs. %f",bill);
    }
    else if(unit<=300 && unit>=201){
        bill=((unit-200)*3)+(100*2)+(100*1.5);
        printf("Bill=Rs.%f",bill);
    }
    else{
        bill= ((unit-300)*5)+(100*3)+(100*2)+(100*1.5);
        printf("Bill=Rs. %f",bill);
    }
    
    return 0;
}