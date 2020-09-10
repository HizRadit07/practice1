#include <stdio.h>

int main(){
    int amt,total;
    printf("input the amount:");
    scanf("%d",&amt);
    total=(int)amt/100;
    printf("there are:\n");
    printf("%d note(s) of 100.00\n",total);
    amt=amt-(100*total);
    total=(int)amt/50;
    printf("%d note(s) of 50.00\n",total);
    amt=amt-(50*total);
    total=(int)amt/20;
    printf("%d note(s) of 20.00\n",total);
    amt=amt-(20*total);
    total=(int)amt/10;
    printf("%d note(s) of 10.00\n",total);
    amt=amt-(10*total);
    total=(int)amt/5;
    printf("%d note(s) of 5.00\n",total);
    amt=amt-(5*total);
    total=(int)amt/2;
    printf("%d note(s) of 2.00\n",total);
    amt=amt-(2*total);
    total=(int)amt/1;
    printf("%d note(s) of 1.00\n",total);

    return 0;
}