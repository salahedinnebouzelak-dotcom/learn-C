#include<stdio.h>
void fun(int a,int b){
    int c=a+b;
    printf("%d",c);
}
int main(){
    /* pointer of array
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *b=a;
    for(int i=0;i<10;i++){
        printf("%d :%p\n",*(b+i),b+i);
    }
    */

    /* pointer of function
    int a=10,b=20;
    void (*f)(int,int)=&fun;
    f(a,b);
    printf("\n");
    printf("pointer function holding the address: %p\n",f);
    printf("address of function fun: %p\n",fun);
    */

    /* array of pointer
    static int a=10;
    int *p=&a;
    for(int i=1;i<5;i++){
        printf("enter a number: ");
       scanf("%d",p+i);
       
    }
    for(int i=0;i<10;i++){
        printf("%d :%p\n",*(p+i),p+i);
    }
    */
    














    return 0;
}