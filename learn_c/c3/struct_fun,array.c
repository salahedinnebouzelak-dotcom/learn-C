#include<stdio.h>
#include <string.h>
    typedef struct{
        char name[50];
        int age;
        char job[51];
    }infomation;
int main(){
    infomation info[3];
    for(int i=0;i<3;i++){
        
    
    printf("enter your name: ");
    fgets(info[i].name,sizeof(info[i].name),stdin);
    printf("enter your age: ");
    scanf("%d",&info[i].age);
    getchar();
    printf("enter your job: ");
    fgets(info[i].job,sizeof(info[i].job),stdin);
        printf("\n");
    }

    infomation order;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(info[i].age<info[j].age){
                order=info[i];
                info[i]=info[j];
                info[j]=order;
                
            }
        }
    }
    //used to change the data of the struct
    //strcpy(order.name,info[i].name);
    
    printf("\n");

    for(int i=0;i<3;i++){
        printf("name: %s , age: %d , job: %s",info[i].name,info[i].age,info[i].job);
        
        printf("\n");
    }




    return 0;
}