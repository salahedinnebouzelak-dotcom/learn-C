#include<stdio.h>
# include <string.h>
void Hello(char name[],int a){printf("\n you born %d,Hello %s in world!",a,name);}
int main()
{int year;
char name[50];
printf("enter your name: ");
fgets(name, sizeof(name) ,stdin);
name[strlen(name) -1]='\0';
printf("enter your year born: ");
scanf("%d",&year);
    Hello(name,year);Hello(name, year);Hello(name, year);
    return 0;
}