#include<stdio.h>

int main(){
char a='\0';
float b;
float c;
printf("temperature conversation calculator\n");
printf("C.Celsius to Fahrenheit\n");
printf("F.Fahrenheit to Celsius \n");
printf("Enter your choice(F,C): ");
scanf("%c",&a);
while(a!= 'C' && a!= 'F'){
printf("\n______________________\n");
printf("temperature conversation calculator\n");
printf("C.Celsius to Fahrenheit\n");
printf("F.Fahrenheit to Celsius \n");
printf("Enter your choice(F,C): ");
scanf(" %c",&a);
}

if (a=='C'){
printf("enter the temp in Celsius: ");
scanf("%f",&c);
b=((c*9)/5)+32;
printf("%.2f Celsius is %.2f Fahrenheit",c,b);
}
else if (a=='F'){
printf("enter the temp in Fahrenheit: ");
scanf("%f",&c);
b=(5*(c-32))/9;
printf("%.2f Fahrenheit is %.2f Celsius",c,b);
}
    return 0;
}