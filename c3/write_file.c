#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp= fopen("test.txt","w");
    if(fp==NULL){
        printf("error");
        return 1;
    }
    char str[50]="He who has a why to live can bear almost any how";
    char str1[50];
    fgets(str1,sizeof(str1),stdin);
    fprintf(fp,"%s\n%s",str,str1);
    fclose(fp);
    return 0;
}