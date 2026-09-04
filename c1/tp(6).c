#include<stdio.h>
void sp(float a, float b ,float *s,float *p);
int main()
{float a,b,s,p;

printf("enter a: ");
scanf("%f",&a);
printf("enter b: ");
scanf("%f",&b);
    
sp(a,b,&s,&p);
    
return 0;
}


void sp(float a, float b ,float *s,float *p){
*p=2*(a+b);
printf("your perimeter: ");
printf("%.2f cm\n",*p);

*s=a*b;
printf("your area: ");
printf("%.2f cm²",*s);
}