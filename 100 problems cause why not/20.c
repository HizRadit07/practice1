#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float r1,r2,diskriminan;
    printf("input a:");
    scanf("%d",&a);
    printf("\ninput b:");
    scanf("%d",&b);
    printf("\ninput c:");
    scanf("%d",&c);
    diskriminan=(b*b)-(4*a*c);

    if (diskriminan>=0 && a!=0){
        r1=(-b+sqrt(diskriminan))/(2*a);
        r2=(-b-sqrt(diskriminan))/(2*a);
        printf("Root1= %.5f\n",r1);
        printf("Root2=%.5f\n",r2);
    }
    else{
        printf("\nImpossible to find the roots\n");
    }

    return 0;
}



