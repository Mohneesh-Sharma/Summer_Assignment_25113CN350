#include<stdio.h>
#include<string.h>

int main(){
    char str[100],rem[100];
    int j=0;
    printf("enter your string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            rem[j]=str[i];
            j++;
        }
        else continue;
    }
    printf("Updated string :\n%s",rem);
    return 0;
}