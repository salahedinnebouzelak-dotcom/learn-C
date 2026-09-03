#include<stdio.h>
void questions( int i);
void choices(int i);
int main()
{
printf("***QUIZ GAME***\n");
for(int i=0;i<=2;i++){
questions(i);
choices(i);}
            
        
    
\  
    return 0;
}
void questions( int i){
char question[3][50]={"What is the biggest country in African?",
                      "What is the biggest university in African?",
                      "When was World War II?"};
printf("%s\n",question[i]);
}

void choices(int i){
char choice[4][50]={{"A.ALEGRIA","B.EGYPT","C.MOROCCO","D.NIGERIA"},
                  {"A.ALAWI","B.AZHAR","C.ZAYTONA","D.HOWARI BO MADYAN"}};
printf("%s\n",choice[i][2]);                     
}

    