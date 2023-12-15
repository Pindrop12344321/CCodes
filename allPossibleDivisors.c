#include<stdio.h>

void main()
{
    int a,i=0;
    printf("Enter value : ");
    scanf("%d",&a);
    printf("All possible divisors are :- \n");
    while(i<=a){
    if(a%i == 0){
    printf("%d\n",i);
    }
    i++;
    }
    
}