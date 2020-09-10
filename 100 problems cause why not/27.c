#include <stdio.h>

int main(){
    float numbers[5];
    int j,pos=0,neg=0;
    printf("input first number:");
    scanf("%f",&numbers[0]);
    printf("\ninput second number:");
    scanf("%f",&numbers[1]);
    printf("\ninput third number:");
    scanf("%f",&numbers[2]);
    printf("\ninput fourth number:");
    scanf("%f",&numbers[3]);
    printf("\ninput fifth number:");
    scanf("%f",&numbers[4]);

    for (j=0;j<5;j++){
        if (numbers[j]>0){
            pos++;
        }
        else if (numbers[j]<0){
            neg++;
        }
    }

    printf("\npositive number ada %d",pos);
    printf("\nnegative number ada %d",neg);

    return 0;
}