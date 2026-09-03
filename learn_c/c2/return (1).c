#include<stdio.h>
#include <stdbool.h>
bool geck(int age){
if (age>=18){return true ;}
else{return false;}}
int main()
{
int age=geck(age);
    printf("enter your age: ");
    scanf("%d",&age);
    if(geck(age)){
    printf("you are adult");}
    else{printf("your are children");}
    return 0;
}