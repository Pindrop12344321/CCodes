#include<stdio.h>
#include<conio.h>

void main()
{

  int a,digit=0;
  
  printf("Enter number : ");
  scanf("%d",&a);
  
    while(a>0){
    a = a/10;
    digit++;
    }
    printf("number of digits are %d ",digit);
}