#include<stdio.h>

int main()
{ int s;
int sum=0;
int r=0;
printf("***perfect numbers***\n");
for(int i=2;i<=1000;i++){
  for(int j=1;j<i;j++){
  s=i%j;
  if(s==0){
  sum+=j;
  }
  }
  r=r+sum;
  if(i==r){printf("%d\n",i);}
  r=0;
  sum=0;
  

  
   
}
    return 0;
}