// malloc faster , calloc leads to less bugs
// calloc returns 0
#include<stdio.h>
#include<stdlib.h>

int main(){
    // malloc function
    int Participants;
    printf("enter the number of participants: ");
    scanf("%d",&Participants);
    int *score=calloc(Participants,sizeof(int));

    /*for(int i=0;i<Participants;i++){
        printf("%d ",score[i]);
    }
    printf("\n");
    */
    for(int i=0;i<Participants;i++){
        printf("enter the score of participant %d: ",i+1);
        scanf("%d",&score[i]);
    }
    printf("\n");
    for(int i=0;i<Participants;i++){
        printf("the score of participant %d is: %d\n",i+1,score[i]);
    }
    free(score);
    score=NULL;
    return 0;
}