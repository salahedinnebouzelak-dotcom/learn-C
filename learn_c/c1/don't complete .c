#include<stdio.h>
#include <unistd.h>
#include <string.h>

//hour 
int main()
{
int i=0;
int min=0;
int h=0;
char b; 
char a;

printf("Enter (S) to start (q) to quit: ");
scanf("%c",&b);

while(b=='s' || b=='S'){
 i++;
 if(i==60){min++;i-=60;}
 else if(min==60){h++;min-=60;} 
    
    printf("\n%02dh:%02dm:%02ds",h,min,i);
    sleep(0.999999);
    printf("\033[0A\033[2K");
}


    return 0;
}
    