#include<stdio.h>

void main()
{
  int a,val,sum=0;
  printf("Enter number : ");  
  scanf("%d",&a);
  while(a>0){
  val = a%10;
  a = a/10;
  sum = sum + val;
  }
  printf("Sum of digits is %d ",sum);
  
}