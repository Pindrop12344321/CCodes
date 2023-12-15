#include<stdio.h>
#include<conio.h>

void main()
{

int a,i=a,div=0;

printf("Enter number : ");
scanf("%d",&a);

    while(i>0){
    if(a%i == 0){
    div++;
    }
    i--;
    }
    if(div == 2){
    printf("Given numver is prime");
    }
    else{
    printf("Given numver is not prime");
    }
    
}