#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Enter first string:\n");
    fgets(str1,100,stdin);
    str1[strlen(str1)-1]='\0';
    printf("Enter second string:\n");
    fgets(str2,100,stdin);
    str2[strlen(str2)-1]='\0';
    int l1=strlen(str1),l2=strlen(str2);
    if(l1!=l2){
        printf("***Strings are not anagram strings***");
        return 0;
    }
    for(int i=0;i<l1;i++){
        int count1=0,count2=0;
        for(int k=0;k<l1;k++){
            if(str1[i]==str1[k])
            count1++;
        }
        for(int j=0;j<l2;j++){
            if(str1[i]==str2[j]){
                count2++;
            }
        }
        if(count1!=count2){
        printf("***Strings are not anagram strings***");
        return 0;        }
    }
    printf("***Strings are anagram strings***");
    return 0;
}
