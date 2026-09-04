#include<stdio.h>
int main()
{
int a;
int z;
int p=0;
while (1){
printf("enter a number(0 to quit): ");
scanf("%d",&a);
printf("\n");
if(a==0){break;}
printf("divisors of %d is: ",a);
for(int i=1; i<=a ;i++){
z=a%i;
if(z==0){printf("%d",i);
p++;
if(i!=a){printf(",");}}
}
if(p==2){printf("\n%d is prime number",a);}
else{printf("\nthe number of divisors is: %d",p);}
printf("\n______________________________\n");
p=0;}
    return 0;
}