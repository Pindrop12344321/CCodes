#include<stdio.h>

int main()
{
    
    int a,b;
    printf("Enter %d Value : ",1);
    scanf("%d",&b);
    for(int i=1;i<11.;i++){
    printf("Enter %d Value : ",i+1);
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