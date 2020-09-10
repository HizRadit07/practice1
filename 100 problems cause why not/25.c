#include <stdio.h>

int main(){
    int a;
    printf("insert a number for month name:");
    scanf("%d",&a);
    if (a>=1 && a<=12){
        if (a==1){
            printf("January");
        }
        if (a==2){
            printf("February");
        }
        if (a==3){
            printf("March");
        }
        if (a==4){
            printf("April");
        }
        if (a==5){
            printf("May");
        }
        if (a==6){
            printf("June");
        }
        if (a==7){
            printf("July");
        }
        if (a==8){
            printf("August");
        }
        if (a==9){
            printf("September");
        }
        if (a==10){
            printf("October");
        }
        if (a==11){
            printf("November");
        }
        if (a==12){
            printf("December");
        }
    }
    else{
        printf("its not a month..");
    }



    return 0;
}






