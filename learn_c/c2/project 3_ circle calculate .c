#include<stdio.h>
#include <math.h>
int main()
{
char c1[]="cm";
char c2[]="cm²";
char c3[]="cm³"; 

float radius;
float s;
float p;
float pi=3.14159265359;
float v;

    printf("Enter the radius of circle(cm): ");
    scanf("%f",&radius);
    
    s=2*radius*pi;
    p=pow(radius,2)*pi;
    v=(pi*pow(radius,3)*4)/3;
    
    printf("-------------------\n");
    printf("The surface of circle is: %.2f %s\n",s,c1);
    printf("the area of circle is: %.2f %s\n",p,c2);
    printf("the value of circle is : %.2f %s\n",v,c3);
    if (s<20){
    printf("you lose");}
    else{
    printf("you win");}
    return 0;
}