#include<stdio.h>

int main()
{
    int a,r,o;
    int b=0;
    printf("enter a number: ");
    scanf("%d",&a);
    o=a;
    while(a>0){
    r=a%10;
    a=a/10;
    b=b*10+r;
    }
    printf("your mmirror of %d is %d",o,b);
    return 0;
}