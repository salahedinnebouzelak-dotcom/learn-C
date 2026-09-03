#include<stdio.h>
#include <string.h>
int main()
{
char adj1[50];
char adj2[50];
char name[50];
char adverb[50]="";

    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1)-1]='\0';
    
    printf("Enter a noun (pet or person): ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1]='\0';
    
    
    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2)-1]='\0';

    
    
    printf("enter a adverb: ");
    fgets(adverb, sizeof(adverb), stdin);
    adverb[strlen(adverb)-1]='\0';
    
    printf("\nHello, my name is %s\n",name);
    printf("Today I want to the zoo\n");
    printf("I see Elon mask there\n"); 
    printf("he is a %s person \n",adj1);
    printf("Elon mask was a %s when he %s",adj2, adverb);
    return 0;
}