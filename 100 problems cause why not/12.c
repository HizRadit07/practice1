#include <stdio.h>

int main(){
    char id[10];
    int hour;
    double value,salary;
    printf("input employee id, max 10 characters:");
    scanf("%s",&id);
    printf("\ninput working hours:");
    scanf("%d",&hour);
    printf("\nSalary per hour:");
    scanf("%lf",&value);
    salary= value*hour;

    printf("ID of employee is %s",id);
    printf("\ntotal salary is:%.2lf",salary);

    return 0;
}