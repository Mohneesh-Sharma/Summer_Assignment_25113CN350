#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word[100];
    printf("Enter your string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str);
    int max=0,j,i;
   for(i=0;i<l;i++){
    int count=0,k=0;
    //for(j=i;(str[j]!=' ' && str[j]!='.') && (str[j]!='\n' && str[j]!='\0') && ( (str[j]>=65&&str[j]<=90) || (str[j]>=97 && str[j]<=122));j++){
    for(j=i;(str[j]>=65&&str[j]<=90) || (str[j]>=97 && str[j]<=122);j++){
        count++;
    }
    if(count>max){
        max=count;
        for(int q=i;q<j;q++){
            word[k]=str[q];
            k++;
        }
        word[k]='\0';
    }
    i=j;
   }
//    word[strlen(word)]='\0';
   printf("Longest word :\n%s",word);
    return 0;
}