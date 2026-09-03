#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
int a;
srand(time(0));
int b=(rand()%3)+1;
printf("---choice one---\n");
printf("1.ROCK\n");
printf("2.PAPER\n");
printf("3.SCISSORS\n");
printf("Enter an option: ");
scanf("%d",&a);
switch(a){
 case 1: 
 printf("you choice: rock\n");
 break;
 case 2: 
 printf("you choice: paper\n");
 break;
 case 3: 
 printf("you choice: scissors\n");
 break;}
switch(b){
 case 1:
 printf("computer choice: rock\n");
 break;
 case 2: 
 printf("computer choice: paper\n");
 break;
 case 3: 
 printf("computer choice: scissors\n");
 break;} 
 
 if(a==b){printf("IT'S A TIE!");}
 else if((a==1 && b==2)||(a==2 && b==3)||(a==3 &&b==1)){printf("YOU LOSE!");}
 else if((a==2 && b==1)||(a==3 && b==2)||(a==1 &&b==3)){printf("YOU WIN!");}
    return 0;
}