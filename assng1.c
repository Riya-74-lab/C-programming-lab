
#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter three numbers:\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a>b && a>b){
        printf("%f>%f and %f>%f",a,b,a,c);
    }
    else if(b>a && b>c){
        printf("%f>%f and %f>%f",b,a,b,c);
    }
    else{
        printf("%f>%f and %f>%f",c,a,c,b);
    }

    return 0;
}