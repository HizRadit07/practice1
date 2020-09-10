#include <stdio.h>

int main(){
    int i, numbers[5], total=0;
    printf("\ninput first number:");
    scanf("%d",&numbers[0]);
    printf("\ninput second number:");
    scanf("%d",&numbers[1]);
    printf("\ninput third number:");
    scanf("%d",&numbers[2]);
    printf("\ninput fourth number:");
    scanf("%d",&numbers[3]);
    printf("\ninput fifth number:");
    scanf("%d",&numbers[4]);

    for (i=0;i<5;i++){
        if((numbers[i]%2!=0)){
            total+=numbers[i];
        }
    }
    printf("\nSum of all odd values is %d\n",total);
    return 0;

}


