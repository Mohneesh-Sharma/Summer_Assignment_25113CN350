#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter your string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str);
    int max1=0;
    char c=str[0];
    for(int i=0;i<l;i++){
        int count=0;
        for(int j=0;j<l;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(max1<count){
            max1=count;
            c=str[i];
        }
    }
    printf("Maximum occurring character is: %c (count: %d)",c,max1);
    return 0;
}