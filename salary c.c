#include<stdio.h>

int main()
{ int basic_salary,net_salary,hra,da,pf;
 printf("basic_salary is :");
 scanf("%d", &basic_salary);
 hra=50*basic_salary/100;
 da=60*basic_salary/100;
 pf=15*basic_salary/100;
 net_salary=(basic_salary+hra+da)-pf;
 printf("%d\n",  net_salary);
    printf("Hello world!");
    return 0;
}