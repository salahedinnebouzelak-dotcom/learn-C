#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int a;
int p=0;
srand(time(NULL));

/* int min =b;
int max =a;
int rands =(rand()%(max-min+1))+min;
*/
int rands =(rand()%100)+(rand()%2);
printf("***guss num game***\n");
while(a!=rands){
p++;

printf("guss a number between 0_100: ");
scanf("%d",&a);

int b=a-rands;
while(a<0 || a>100){
printf("pls, guss a number between 0_100: ");
scanf("%d",&a);
}
if(a==rands){
printf("you are true the guss num is %d\n",rands);
printf("your gusses is: %d",p);
break;}
else if(b<=10&& b>=-10){printf("you are so near\n");}
else if(b<=30&& b>=-30){printf("you are near\n");}
else if(b<=50&& b>=-50){printf("you are far\n");}
else if(b>=50 || b<=-50){printf("you are so far\n");}

}


    return 0;
}