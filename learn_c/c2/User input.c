#include<stdio.h>
#include<string.h>
int main(){
int age;
char name[30];
char fullname[50];
printf("enter your age ");
scanf(" %d",&age);

printf("enter your first name: ");
scanf(" %s",&name);

getchar();
printf("enter your full name: ");
fgets(fullname ,sizeof(fullname), stdin);
fullname[strlen(fullname) -1]='\0';

printf("%s\n",fullname);
printf("%d\n",age);
printf("%s\n",name);


    return 0;
}