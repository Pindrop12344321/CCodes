#include<stdio.h>

void main()
{

int h,w=1;
printf("Enter work hours : ");
scanf("%d",&h);
if(h<=4){
w=h*10;
}
else if(h<=8){
w=(h-4)*15+40;
}
else if(h<=12){
w=(h-8)*20+100;
}
else{
w=300;
}

printf("Total wage is %d",w);

}