#include<stdio.h>

int main()
{ int A;
int B; 
int C;
printf("____order of integer____\n");
printf("Enter A: ");
scanf("%d",&A);
printf("Enter B: ");
scanf("%d",&B);
printf("Enter C: ");
scanf("%d",&C);
if(A>=B && B>=C){
printf("the order of integer is: A>B>C");}
else if(A>=C && C>=B){
printf("the order of integer is: A>C>B");}
else if(B>=A && A>=C){
printf("the order of integer is: B>A>C");}
else if(B>=C && C>=A){
printf("the order of integer is: B>C>A");}
else if(C>=B && B>=A){
printf("the order of integer is: C>B>A");}
else if(C>=A && A>=B){
printf("the order of integer is: C>A>B");}
    
    return 0;
}