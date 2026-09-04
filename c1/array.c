#include<stdio.h>
#include <string.h>
int main()
{ int numbers[]={1,3,5,7,3,8,5};
int count=4;
char names[6][20]={"salah","abdo","mira","HODA"};
char grades[]={'A','B','D','S'};
char name[50]="salah";

for (int i=0;i<4;i++){
printf("%c",grades[i]);}
printf("\n");

for (int i=0;i<(sizeof(numbers)/sizeof(numbers[0]));i++){
numbers[0]=2;
printf("%d",numbers[i]);}
printf("\n");

strcpy(names[count++],name);
strcpy(names[0],"jinan");
for (int i=0;i<5;i++){
printf("%s ",names[i]);}

printf("\n");
for (int i=0;i<strlen(name);i++){
printf("%c",name[i]);}
    
    return 0;
}