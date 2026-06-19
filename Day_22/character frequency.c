#include<stdio.h>
#include<string.h>

int main(){
    char str[100],ele;
    int count =0;
    printf("enter your string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter the character :\n");
    scanf("%c",&ele);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ele){
            count++;
        }
    }
    printf("Frequency of the character is : %d",count);
    return 0;
}