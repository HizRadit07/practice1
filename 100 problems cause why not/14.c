#include <stdio.h>

int main(){
    int d; //d:distance
    float f;//f:fuel,c:consumption
    printf("input total distance (km):");
    scanf("%d",&d);
    printf("input total fuel spent (liters):");
    scanf("%f",&f);

    printf("average consumption (km/lt) is %.2f",d/f);
    return 0;
}