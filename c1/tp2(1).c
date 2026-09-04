#include<stdio.h>

int main()
{ 
int a;
    printf("enter your level in English(num): ");
    scanf("%d",&a);
    switch(a){
    case 1:
    printf("your level is: A");
    break;
    case 2:
    printf("your level is: B");
    break;
    case 3:
    printf("your level is: C");
    break;
    default:
    printf("your level is not valid");
  
    }
    return 0;
}