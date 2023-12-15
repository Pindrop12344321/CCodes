#include<stdio.h>

int main()
{
    
    int a,b;
    printf("Enter Value Of b : ");
    scanf("%d",&b);
    for(int i=1;i<11;i++){
    printf("Enter %d Value : ",i);
    scanf("%d",&a);
    
    if(a<b){
    b=b;
    }
    else{
    b=a;
    }
    } 
    printf("%d",b);
    
    return 0;
}