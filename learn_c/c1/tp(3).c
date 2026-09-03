#include<stdio.h>

int main()
{
int m;
int n;
int j=0;
char score[][4]={{'A','B','C','1'},
                 {'D','E','F','2'},
                 {'G','H','I','3'},
                 {'J','K','L','4'}};
                 
for (int i=0;i<=3;i++){
for(int j=0;j<=3;j++){
printf("%c",score[i][j]);

if(i+j==3){
m=i;
n=j;
for(i;i<=3;i++){
printf("%c",score[i+1][j]);}
}
}
i=m;
j=n;
printf("\n");
}
             
    return 0;
}