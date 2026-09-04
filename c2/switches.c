#include<stdio.h>

int main(){
int day;
char days;
printf("enter day number: ");
scanf(" %d",&day);
 switch(day){
      case 1:
      printf("it is Monday");
      break;
      case 2:
      printf("it is Tuesday");
      break;
      case 3:
      printf("it is Wednesday");
      break;
      case 4:
      printf("it is Thursday");
      break;
      case 5:
      printf("it is Friday");
      break;
      case 6:
      printf("it is Saturday");
      break;
      case 7:
      printf("it is Sunday");
      break;
      default:
      printf("enter number between 1 and 7");
 }
 printf("\nenter day (M,T,W,R,F,S,U): ");
scanf(" %c",&days);
 switch(days){
      case 'M':
      printf("it is Monday");
      break;
      case 'T':
      printf("it is Tuesday");
      break;
      case 'W':
      printf("it is Wednesday");
      break;
      case 'R':
      printf("it is Thursday");
      break;
      case 'F':
      printf("it is Friday");
      break;
      case 'S':
      printf("it is Saturday");
      break;
      case 'U':
      printf("it is Sunday");
      break;
      default:
      printf("enter first litter ");
}
    
    return 0;
}