#include<stdio.h>

int main()
{int score[5];
for(int i=0 ;i<5;i++){
printf("enter a number:");
scanf("%d",&score[i]);
}

for(int i=0 ;i<5;i++){
printf("%d ",score[i]);
}
    
    return 0;
}