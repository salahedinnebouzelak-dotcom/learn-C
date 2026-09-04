#include<stdio.h>
float area(float a,float b);
float perimeter(float a,float b);
int main()
{float a;
float b;
float s,p;
    printf("enter a: ");
    scanf("%f",&a);
    printf("enter b: ");
    scanf("%f",&b);
    printf("your area:");
    s=area(a,b);
    printf("%.1fcm²\n",s);
    printf("your perimeter:");
    p=perimeter(a,b);
    printf("%.1fcm",p);
    return 0;
}
float area(float a,float b){
return a*b;
}
float perimeter(float a,float b){
return 2*(a+b);}