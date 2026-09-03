#include<stdio.h>

int main()
{ float x;
float z;
float y;
char d[100]="DA";
printf("Enter your weight(Kg): ");
scanf("%f",&x);
if (x>0 && x<=20){
y=25*x;
printf("your price is: %.1f%s",y,d);}
else if (x>20 && x<=50){
y=40*x;
printf("your price is: %.1f%s",y,d);}
else if (x>50 && x<=100){
y=50*x;
printf("your price is: %.1f%s",y,d);}
else if (x>100){
z=x-100;
y=50*100 + 10*z;
printf("your price is: %.2f%s",y,d);}
    
    return 0;
}