#include<stdio.h>

int main()
{int a;
float b;
float c;
float e;
float f;
printf("weight conversation calculator\n");
printf("1.kg to pounds\n");
printf("2.pounds to kg\n");
printf("Enter your choice(1,2): ");
scanf("%d",&a);
while(a!=1 && a!=2){
printf("______________________\n");
printf("weight conversation calculator\n");
printf("1.kg to pounds\n");
printf("2.pounds to kg\n");
printf("Enter your choice(1,2): \n");
scanf("%d",&a);}

if (a==1){
printf("enter the weight in kg: ");
scanf("%f",&c);
b=c*2.20462;
printf("%.2f kg is %.2f pounds",c,b);
}
else if (a==2){
printf("enter the weight in pounds: ");
scanf("%f",&e);
f=e*(1/2.20462);
printf("%.2f pounds is %.2f kg",e,f);
}

    return 0;
}