#include<stdio.h>
#include <string.h>
int main()
{
int y;
int s;
char d;


printf("Enter the # of rows: ");
scanf("%d",&y);

printf("enter the # of columns: ");
scanf("%d",&s);

printf("Enter a symbol to use : ");
scanf(" %c",&d);

    for(int j = 0 ;j< y ; j++){
        for(int i = 0 ;i< s ; i++){
            printf("%c",d);}
    printf("\n");
    }
    return 0;
}