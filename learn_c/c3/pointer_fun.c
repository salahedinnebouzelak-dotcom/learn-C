#include<stdio.h>
void add(int *q);
int main(){
 int   a=10;
 int *b=&a;
 add(b);
 printf("%d",a);

    return 0;
}
void add(int *q){

    (*q)++;
}