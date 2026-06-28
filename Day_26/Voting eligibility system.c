#include<stdio.h>
#include<string.h>
void voter(){
    int age;
    printf("Enter age of the person : ");
    scanf("%d",&age);
    if(age>=18) printf("***YOU ARE ELIGIBLE TO VOTE!***\n");
    else printf("**YOU ARE NOT ELIGIBLE TO VOTE**\n");
}

int main(){
    voter();
    while(1){
    int choice;
    printf("Do you want to check more ??\nEnter 1 for YES \nEnter 0 for NO\n");
    scanf("%d",&choice);
    if(choice==1) voter();
    else if(choice==0){
        printf("!!!THANK YOU!!!");
        return 0;
    }
    else printf("Enter correct choice\n");
    }
    return 0;
}