#include<stdio.h>
#include<math.h>
int main()
{int n;
int s=0;
int S=0;
int u,r;
printf("enter the n of sum: ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
  u=3*pow(i,2)-2*i+1;
  s=s+u; 
  S=S+r;
  }
printf("the sum S1 is:%d",s);  
    return 0;
}