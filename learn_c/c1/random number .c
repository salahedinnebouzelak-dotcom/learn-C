#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ int rands =-1;

srand(time(NULL));
for(int i=0;i<100;i++){
/* int min =b;
int max =a;
int rands =(rand()%(max-min+1))+min;
*/
int rands =(rand()%100)+(rand()%2);
int randsw =(rand()%100)+(rand()%2);
if(rands<=50){rands+=50;}
if(randsw>=50){randsw-=50;}

printf("%d %d\n",rands,randsw);

}
    return 0;
}