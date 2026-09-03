#include<stdio.h>

int main()
{int b;
float a,price;
int c=0;

    printf("enter weight in kg: ");
    scanf("%f",&a);
    if(a>=0 && a<=20){
    b=25;}
    else if( a<=50){
    b=40;}
    else if( a<=100){
    b=50;}
    else{
    b=50;
    c=a-100;}
    price=a*b+c*10;
    printf("your price is: %.2f kg",price);
    return 0;
}