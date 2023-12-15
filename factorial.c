#include <stdio.h>
#include <conio.h>

void main(){
 
     int a,b;
     printf("Enter any no. ");
     scanf("%d",&a);
     b = a;
     
     while( b > 1){
           
           b = b - 1;
           a = a*b;
           
     }
     printf("%d",a);
     
}