#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len=0,i=0;
    printf("enter your string :\n");
    scanf("%s",str);
    while(str[i]!='\0'){
        len++;
        i++;
    }
    printf("length of string : %d ",len);
    return 0;
}