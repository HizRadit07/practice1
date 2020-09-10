#include <stdio.h>

int main(){
    int i,sum,numbers[5];
    sum=0;
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&numbers[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if (numbers[i]%2!=0)
        {
            sum=sum+numbers[i];
        }
        
    }
    printf("the sum of all odd numbers are: %d\n",sum);
    
    return 0;
}