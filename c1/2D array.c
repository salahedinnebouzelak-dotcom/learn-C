#include<stdio.h>
#include <time.h>
int main()
{
int score[][4]={{'1','2','3'},
                 {'4','5','6'},
                 {'7','8','9'},
                 {'*','0','#'}};
char scor[][4]={{'A','B','C'},
                 {'D','E','F'},
                 {'G','H','I'},
                 {'J','K','L'}};
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        printf("%c ",score[i][j]);
    }printf("\n");
    }
 printf("\n");   
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        printf("%c ",scor[i][j]);
    }printf("\n");
    }  
    printf("\n");


    return 0;
}