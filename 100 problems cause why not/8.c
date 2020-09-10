//Hizkia Raditya 13519087
#include <stdio.h>

int main(){
    int j,y,w,d; //j=num,y,m,d:year,month,day
    scanf("%d",&j);

    y=j/365;
    w=(j%365)/7;
    d=j-((y*365)+w*7);

    printf("Year:%d\n",y);
    printf("Weeks:%d\n",w);
    printf("Days:%d\n",d);

    return 0;

}