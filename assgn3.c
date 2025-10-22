
#include<stdio.h>

int main() {
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    if (year %4 == 0){
        printf("%f is a leap year",year);
    }
    else if(year %100==0){
        printf("%d not a leap year",year);
    }

    return 0;
}