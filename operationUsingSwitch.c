#include<stdio.h>
#include<conio.h>

void main()
{
  float num1,num2;
  char opera;
  printf("Enter first number : ");
  scanf("%f",&num1);
  printf("Enter second number : ");
  scanf("%f",&num2);
  printf("Enter operation: ");
  scanf(" %c",&opera);
  
  switch(opera){
  case '+':printf("Sum = %f",num1+num2);
  break;
  case '-':printf("Substraction = %f",num1-num2);
  break;
  case '*':printf("Multiplication =%f",num1*num2);
  break;
  case '/':printf("Division = %f",num1/num2);
  break;
  default:printf("Invalid input");
  
  
  
  }
}