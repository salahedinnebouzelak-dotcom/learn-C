 #include<stdio.h>

int main()
{
int w=3;
int x=2;
int y=7;
int z=0;
int b=0;
int d=0;
int f=0;
int u=0;
//float t=5;
int t=5;
//float t=5;
z=y+x;
b=y-x;
d=y*x;
f=y/x;
//u=y/t;
u=y%t;
w++;
//or w--;
//or w=1+w or w+=1;
//(+,×,/,*)=
    printf("%d\n",z);
    printf("%d\n",b);
    printf("%d\n",d);
    printf("%d\n",f);
//   printf("%d\n",u);
    printf("%2d\n",u);
    printf("%2d\n",w);
    return 0;
}