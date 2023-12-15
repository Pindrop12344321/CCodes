#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,value=1,j,i;
    printf("Enter first value : ");
    scanf("%d",&a);
   printf("Enter second value : ");
   scanf("%d",&b);
    
    for(j=a;j<=b;j++){
    
    for(i=j;i>0;i--){
      value = value*i;
    }
    printf("Factorial of %d is %d \n",j,value);
    value = 1;
    
    }
    
}