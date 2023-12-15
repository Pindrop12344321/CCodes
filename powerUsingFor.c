#include<stdio.h>
#include<conio.h>

void main()
{
    
    int a,b,i,pow=1;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    for(i=b;i>0;i--){
    pow = pow*a;
    }
    printf("%d",pow);
    
}