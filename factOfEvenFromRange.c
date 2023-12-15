#include<stdio.h>

void main()
{
    int num1,num2,fact=1,j,i,swap;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    
    if(num1>num2){
    swap = num1;
    num1 = num2;
    num2 = swap;
    }
    
    for(i=num1;i<=num2;i++){
    if(i%2 == 0){
    for(j=i;j>0;j--){
    fact = fact * j;
    }
    printf("fact.. of %d is %d\n",i,fact);
    fact = 1;
    }
    }
}