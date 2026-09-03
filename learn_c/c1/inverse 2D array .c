#include<stdio.h>

int main()
{
char score[][4]={{'A','B','C','1'},
                 {'D','E','F','2'},
                 {'G','H','I','3'},
                 {'J','K','L','4'}};
                 
for (int i=0;i<=3;i++){
for(int j=0;j<=3;j++){
printf("%c",score[j][i]);
}

printf("\n");
}
             
    return 0;
}