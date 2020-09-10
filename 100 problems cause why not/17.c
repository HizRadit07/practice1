#include <stdio.h>

int main(){
    int input,h,m,s;
    printf("input seconds:");
    scanf("%d",&input);
    h=(int)input/3600;
    input=input-h*3600;
    m=(int)input/60;
    input=input-m*60;
    s=input;
    printf("H:M:S-%d:%d:%d\n",h,m,s);
    return 0;
}