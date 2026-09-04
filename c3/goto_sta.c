#include<stdio.h>

int main(){

    int a=10;
    int b=20;
    l1:
    a++;
    if(a<=b){
        printf("%d\n",a);
      goto l1;
    }
      
        
    

    return 0;
}