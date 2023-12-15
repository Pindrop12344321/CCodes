#include<stdio.h>

int main()
{

int A[5],z=0,j,i,b;

printf("enter value");

for(i=0;i<5;i++){
scanf("%d",&A[i]);
}
printf("Tables");

for(i=0;i<5;i++){

for(j=0;j<11;j++){
b=A[i]*j;
printf("%d\n",b);
}

}

    printf("Hello world!");
    return 0;
}