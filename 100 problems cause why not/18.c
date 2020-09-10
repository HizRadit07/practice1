#include <stdio.h>

int main(){
    int input,y,m,d;
    printf("input no. of days:");
    scanf("%d",&input);
    y=(int)input/365;
    input=input-y*365;
    m=(int)input/30;
    input=input-m*30;
    d=input;
    printf("%d year(s)\n",y);
    printf("%d month(s)\n",m);
    printf("%d day(s)",d);

    return 0;
}