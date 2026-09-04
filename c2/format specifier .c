#include<stdio.h>

int main(){
//format specifier
//width
int num1=1;
int num2=400;
int num3=4090;
    printf("%3d\n",num1);
    printf("%-5d\n",num2);
    printf("%05d\n",num3);
    printf("%+5d\n",num3);
    
//precistion  
float price1=13.30; 
float price2=-3.35466; 
float price3=135.35; 

printf("%.2f\n",price1);
printf("%7f\n",price2);
printf("%+9f\n",price3);
    return 0;
}