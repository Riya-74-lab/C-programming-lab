#include <stdio.h>

int main() {
    float a;
    printf("Enter a number:\n");
    scanf("%f",&a);
    if (a>0){
        printf("%f is a positive number",a);
    }
    else if(a<0){
        printf("%f is a negative number",a);
    }
    else{
        printf("%f is obviously zero",a);
    }

    return 0;
}