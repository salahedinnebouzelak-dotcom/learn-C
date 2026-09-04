#include<stdio.h>
int getmax(int x ,int y){
if(x>y){return x;}
else
{
return y;}
 }
int main()
{
int x;
int y; 

    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf(" %d",&y);
    
int max=getmax(x,y);
if (max==x){  
    printf("the max is x: %d",x);}
else{
    printf("the max is y: %d",y);}
    
    return 0;
}