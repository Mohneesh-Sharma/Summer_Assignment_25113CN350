#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(){
    int num,guess,count=1;
    num=rand()%101;
    while(1){
        printf("Enter your guess : ");
        scanf("%d",&guess);
        if(guess==num){
            printf("**YOU GUESSED CORRECTLY**\nNumber of guesses : %d\n",count);
            break;
        }
        else if(guess<num) printf("Guess is smaller.\n");
        else printf("Guess is greater.\n");
        count++;
    }
}
int main(){
    srand(time(NULL));
    game();
    while(1){
    int choice;
    printf("Do you want to play again?\nEnter 1 for YES :) \nEnter 0 for NO :(\n");
    scanf("%d",&choice);
    if(choice==1) game();
    else if(choice==0){
        printf("!!! THANKS FOR PLAYING :) !!!");
        return 0;
    }
    else printf("***Enter correct choice***\n");
    }
    return 0;
}