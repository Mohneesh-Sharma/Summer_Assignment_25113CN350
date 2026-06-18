#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    printf("Enter your string : \n");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    for(int i=strlen(str)-1;i>=0;i--) rev[strlen(str)-1-i]=str[i];
    rev[strlen(str)]='\0';
    printf("Reverse of string :\n%s",rev);
    return 0;
}