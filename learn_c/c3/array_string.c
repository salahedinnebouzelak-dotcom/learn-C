#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char name[][20]={"salah","abdo","mira","HODA"};
    srand(time(NULL));
    for (int i=0;i<sizeof(name)/sizeof(name[0]);i++){
        printf("%s\n",name[i]);        
    }
    printf("\n");
    int x=rand()%4;
    printf("%s\n",name[x]);
    printf("\n");
    for (int i=0;i<sizeof(name)/sizeof(name[0]);i++){
        int ran=rand()%4;
        name[i][ran]='a'+rand()%26;
        printf("%s\n",name[i]);
    }
    return 0;
}