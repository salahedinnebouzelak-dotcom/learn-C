#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="hello";
    char str2[100]=" world";
    printf("Enter the string:%s\n",str1);
    puts("puts for string and makes a new line");
    strcat(str1,str2);
    printf("After concatination:%s\n",str1);
    return 0;
}


   