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
while(1>0){
    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf(" %d",&y);
    
int max=getmax(x,y);
if (max==x){
    printf("__________________\n");  
    printf("the max is x: %d\n",x);
    printf("__________________\n");}
else{
    printf("__________________\n"); 
    printf("the max is y: %d\n",y);
    printf("__________________\n");}
     
}    
    return 0;

}