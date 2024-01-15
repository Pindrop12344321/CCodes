#include<stdio.h>
#include<conio.h>

void main(){

char board[3][3];

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
board[i][j] = '-';
if(i==0 && j==3){
printf("\n");
}
if(i==1 && j==3){
printf("\n");
}
if(i==2 && j==3){
printf("\n");
}
printf("%c ",board[i][j]);
}
}
}