#include <stdio.h>

int main(){
    double w1,j1,w2,j2,result;
    printf("weight of item 1\n");
    scanf("%lf",&w1);
    printf("number of item 1\n");
    scanf("%lf",&j1);
    printf("weight of item 2\n");
    scanf("%lf",&w2);
    printf("weight of item 2\n");
    scanf("%lf",&j2);

    result=((w1*j1)+(w2*j2))/(j1+j2);

    printf("\nAverage value=%.2f\n",result);
    return 0;
}