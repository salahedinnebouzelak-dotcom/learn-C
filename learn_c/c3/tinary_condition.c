#include<stdio.h>
struct max
{
    char name;
    int value;
};

int main(){
    struct max max;
    char *nature;       
    int a,b;

    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    
    
    printf("the max is: %c",max.name=(a>b)?'a':'b');
    printf("\n%c: %s",max.name,nature=((max.value=(a>b)?a:b)%2==0)?"even":"odd");

    return 0;
}
