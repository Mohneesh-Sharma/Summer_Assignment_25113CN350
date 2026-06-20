#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter your string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str),f=0;
    for(int i=0;i<l;i++){
        int count = 0;
        for(int j=0;j<l;j++){
            if(str[i]==str[j]) count++;
        }
        if(count!=1){
            printf("The first repeating character is :%c",str[i]);
            f=1;
            break;
        }
    }
    if(f!=1)
    printf("No repeating character");
    return 0;
}
