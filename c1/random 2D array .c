#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ int tab[10];
int tb[4][4];
srand(time(NULL));
for(int j=0 ;j<8;j++){
 for(int i=0; i<10;i++){
  tab[i]=rand()%10;
    printf("%d ",tab[i]);}
    printf("\n");}
    printf("\n");
    
    return 0;
}