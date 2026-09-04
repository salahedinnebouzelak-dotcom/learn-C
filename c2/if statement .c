#include<stdio.h>
#include<string.h>
int main(){
int age;
char st[10]="";
char job[50]="";
printf("enter your age: ");
scanf("%d",&age);

printf("are you a student(yes/no): ");
scanf("%s",&st);

if(age>=50){printf("Hello my grandpa");}
else if(age>18){printf("yoo Are an adult!");}
else if(age==18){printf("hello in man world");}
else if (age<0){printf("seriously pitch");}
else{printf("you still a child");}

if(strlen(st)==3){printf("\nHello student\n");}
else if(strlen(st)==2){printf("\ngo to study\n");}

   return 0;
}