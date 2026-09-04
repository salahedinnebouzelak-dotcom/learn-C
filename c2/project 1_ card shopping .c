#include<stdio.h>

int main()
{
int G=0;
char item[50];
char dz='$';
float price;
float total=0;
    printf("what item would you like to buy?: ");
    scanf("%s",&item);
    
    printf("What is the price for each?: %c",dz);
    scanf(" %f",&price);
    
    
    printf("How many would you like?:");
    scanf("%d",&G);
    
    total= price * G;
    printf("___your order___\n");
    printf("you get %d of %s\n",G,item);
    printf ("the price of one piece of each is :%.1f%c\n",price,dz);
    printf("_____total______\n");
    printf ("the total is: %.1f %c",total,dz);
    return 0;
}