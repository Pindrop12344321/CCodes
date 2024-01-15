#include <stdio.h>

void main() {
    int initial = 0,final = 1;
    int loopCount,sum;
    printf("Enter no. of elements :");
    scanf("%d",&loopCount);
    printf("%d,%d,",initial,final);
    
    for(int i=1;i<=loopCount-2;i++){
    sum=initial+final;
    initial=final;
    final=sum;
    printf("%d,",sum);
    }
}