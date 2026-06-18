#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter your string :\n");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
    printf("Updated string : \n%s",str);
    return 0;
}