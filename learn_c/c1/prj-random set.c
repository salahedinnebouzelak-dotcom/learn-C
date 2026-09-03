#include<stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int main()
{
srand(time(NULL));
int count=0;
int x=pow(10,2);
int w=rand()%x;

printf("number of element:%d ",w);
printf("\n");
sleep(1);

for(int i=0;i<w;i++){
int y=rand()%x;
int list[w];
list[count++]=y;
printf("%d,",list[i]);
sleep(0.5);
}
    
    return 0;
}