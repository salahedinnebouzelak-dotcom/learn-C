#include<stdio.h>
#include <stdbool.h>
void hello(int age ,char name[]);
bool work(int e);

int main()
{ int age;
char name[50];
    printf("enter your name: ");
    scanf("%s",&name);
    printf("enter your age: ");
    scanf("%d",&age);
    hello(age,name);
int e=work(age); 
 if(work(age)){printf("\nyou can work");}  
 else{printf("\nyou can't work");}
    return 0;
}
void hello(int age ,char name[]){
printf("hello %s!\n",name);
printf("you are %d",age);}

bool work(int e){
if(e>=18){return true;}
else{return false;}}
