#include<stdio.h>

int main()
{
    int i,h,b=0,c=10;
    
    printf("Enter hours : ");
    scanf("%d",&h);
    
    if(h<12){
    
    for(i=1;i<=h;i++){
    if(i==5){
    c=15;
    }
    else if(i==9){
    c=20;
    }
    b+=c;
    }
    printf("Wage is %d ",b);
    }
    else{
    printf("Wage is %d ",300);
    }
    
    
    return 0;
}