#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    int count=0;
    printf("enter your string :\n");
    fgets(str,1000,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;i<strlen(str);i++){
            if(str[i]=='\n' || str[i]==' ' || str[i+1]=='\0' || str[i]=='.')
            count++;
        }
    printf("Number of words in the string are : %d",count);
    return 0;
}