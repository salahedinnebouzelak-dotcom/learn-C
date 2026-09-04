#include<stdio.h>

int main()
{float a;
float b;
char p;
    printf("Enter the first num: ");
    scanf("%f",&a);
    printf("enter operation(+,*,/,-): ");
    scanf(" %c",&p);
    printf("Enter the second num: ");
    scanf("%f",&b);
    switch(p){
    case '+':
    a+=b;
    printf("the total is: %.2f",a);
    break;
    case '-':
    a-=b;
    printf("the total is: %.2f",a);
    break;
    case '*':
    a*=b;
    printf("the total is: %.2f",a);
    break;
    case '/':
    a/=b;
    printf("the total is: %.2f",a);
    break;
    default:
    printf("enter the operation (+,*,/,-)");
    }
    return 0;
}