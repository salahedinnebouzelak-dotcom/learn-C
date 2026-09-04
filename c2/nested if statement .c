#include<stdio.h>
#include <string.h>
int main()
{ int a;
char name[50];
printf("enter your age: ");
scanf("%d",&a);
printf("enter your name: ");
scanf("%s",name);
if(strlen(name)==5){
    if(a==18){
    printf("your are very cool");
    }
    else{
    printf("your are cool ");}
}
else{
    if(a==18){
    printf("your are half cool");}
    else{
    printf("fuck you");}
    }
    return 0;
}