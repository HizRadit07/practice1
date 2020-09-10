#include <stdio.h>
int main(){
int numbers[5],i;
int neg,pos;
neg=0;
pos=0;
for ( i = 0; i < 5; i++)
{
    scanf("%d",&numbers[i]);
}
for ( i = 0; i < 5; i++)
{
    if (numbers[i]>0)
    {
        pos++;
    }
    if (numbers[i]<0)
    {
        neg++;
    }

}
printf("pos numbers=%d\n",pos);
printf("neg numbers=%d\n",neg);
return 0;
}