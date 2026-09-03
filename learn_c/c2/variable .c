# include <stdio.h>
# include <stdbool.h>
int main (){
//variable 
char grade ='A';
char name[]="salah";
float p= 4.13;
double e=2.7305247592450;
int age= 18;
int year =2025;
bool is_online= 0;
printf("Hello %s\n",name);
printf("your grade is:%c\n",grade);
printf ("my age is: %d \n",age );
printf ("year is: %d\n",year);
printf("pi is: %.2f\n",p);
printf("the value of e is: %.16Lf\n",e);
printf("%d",is_online);

 return 0;
}