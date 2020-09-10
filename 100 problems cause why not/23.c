#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,perimeter;
    printf("\ninput first number:");
    scanf("%f",&a);
    printf("\ninput second number:");
    scanf("%f",&b);
    printf("\ninput third number:");
    scanf("%f",&c);

    if (a<(b+c)&&b<(a+c)&&c<(a+b)){

            perimeter=a+b+c;
            printf("the perimeter is %.2f",perimeter);
    }
    else{
        printf("a triangle is not possible");
    }

    return 0;
}

