#include<stdio.h>
#include<string.h>

int main(){
 FILE *fp= fopen("read.txt","r"); 
 char buffer[1024]={0};
 if(fp==NULL){
     printf("error");
     return 1;
 }
 while(fgets(buffer,sizeof(buffer),fp)!=NULL){
     printf("%s",buffer);
 }
 fclose(fp);
 return 0;


}