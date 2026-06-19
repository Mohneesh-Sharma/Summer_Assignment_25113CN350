#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int f=0;
    printf("enter your string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;i<strlen(str)/2;i++){
        if(str[i]!=str[strlen(str)-1-i]){
            f=-1;
            break;
        }
    }
    if(f==0) printf("Palindrome string");
    else printf("Not a palindrome string");
    return 0;
}