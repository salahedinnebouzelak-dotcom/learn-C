//while lope
#include<stdio.h>
#include <string.h>
#include <stdbool.h>

bool line(int e);
int main(){
int x;
int y; 
char name[50]="";

printf("enter your name: ");
fgets(name,sizeof(name),stdin);
name[strlen(name)-1]='\0';

while(strlen(name)== 0){
printf("enter a valide name:");
fgets(name,sizeof(name),stdin);
name[strlen(name)-1]='\0';}

while(x<=0){
    printf("enter x positive: ");
    scanf("%d",&x);}
    
do{printf("enter y negative: ");
    scanf(" %d",&y);
   }while(y>=0); 

int s=x*100+y*10;
line(s);
s+=10;
printf("hello %s\n",name);
printf("you live %d",s);

if(line(s)){printf("\nyou are lucky %s",name);}
else{printf("\ndon't dream %s",name);}
    return 0;
}
bool line(int s){
if (s>100){return false;}
else{return true;}}