#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int countv=0,countc=0;
    printf("Enter your string :\n");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            countv++;
            else countc++;
        }
        else continue;
    }
    printf("Total number of vowels : %d\nand\nTotal number of consonants : %d",countv,countc);
    return 0;
}