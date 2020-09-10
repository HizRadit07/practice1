#include <stdio.h>

int main(){
    int a,b,c;
    printf("input 1st integer:");
    scanf("%d",&a);
    printf("input 2nd integer:");
    scanf("%d",&b);
    printf("input 3rd integer:");
    scanf("%d",&c);

    if (a>=b && a>=c){
        printf("%d is the biggest number\n",a);
    }
    else if (b>=a && b>=c){
        printf("%d is the biggest number\n",b);
    }
    else{
        printf("%d is the biggest number\n",c);
    }        
    return 0;
}