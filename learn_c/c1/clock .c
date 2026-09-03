#include<stdio.h>
#include <unistd.h>
//hour
int main()
{
int second;
int min;
int h;
int b; 
    printf("Enter time with second:");
    scanf("%d",&b);
    for (int i=b;i>=0;i--){
    second=i%60;
    min=(i/60)%60;
    h=(i/3600);
    
    printf("%02d:%02d:%02d",h,min,second);
    printf("\n");
    sleep(1);
    printf("\033[H\033[J");
    i--;
    }
    second=b%60;
    min=(b/60)%60;
    h=(b/3600);
    printf("your enter:%02d:%02d:%02d",h,min,second);
    
    return 0;
}