#include<stdio.h>
#include <math.h>
int main()
{float A;
float B;
float C;
float D;    
float x1;
float x2;
float sqr=0.5;
printf("SOLUTION Of EQUATION FOR THE SECOND DEGREE\n");
printf("enter A: ");
scanf("%f",&A);
printf("enter B: ");
scanf("%f",&B);
printf("enter C: ");
scanf("%f",&C);  
D=pow(B,2)-(4*A*C);
if(D>0){
x1=(-B-pow(D,sqr))/2*A;
x2=(-B+pow(D,sqr))/2*A;
printf("the first solution x1: %.2f\n",x1);
printf("the second solution x2: %.2f",x2);
}
else if (D<0){
printf("we don't have solution in R");}

else if (D==0){
x1=-B/(2*A);
printf("we have double solution x1=x2:%.1f",x1);}
    return 0;
}