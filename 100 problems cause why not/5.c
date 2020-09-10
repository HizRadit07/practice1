#include <stdio.h>

int main(){
    int p,l,kel,luas;

    scanf("%d\n%d",&p,&l);

    luas=p*l;
    kel=(2*p)+(2*l);

    printf("perimeter=%d\n",kel);
    printf("luas=%d\n",luas);
    return 0;

}