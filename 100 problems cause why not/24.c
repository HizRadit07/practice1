#include <stdio.h>

int main(){
    int a,b;
    printf("\ninput the first number:");
    scanf("%d",&a);
    printf("\ninput the second number:");
    scanf("%d",&b);
    if (b%a==0){
        printf("\nMultiplied!\n");
    }
    else{
        printf("\nNot multiplied :(\n");
    }
    return 0;
}



