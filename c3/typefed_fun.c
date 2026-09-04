#include<stdio.h>
typedef int (*fun)(int,int);
typedef char counter;
int add(int a,int b){
    return a+b;
}
int main()
{
    int a=10,b=20;
    fun p=add;
    counter c='a';
    
    printf("%c=%d\n",c,p(a,b));
    return 0;
}