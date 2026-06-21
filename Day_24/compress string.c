#include<stdio.h>
#include<string.h>
int main(){
    char str[200],str1[200];
    printf("Enter your string :\n");
    fgets(str,200,stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str);
    int j,q=0;
    for(int i=0;i<l;i++){
        int count=0;
        for(j=i;str[j]==str[i];j++) count++;
        str1[q]=str[i];
        str1[q+1]='0' + count;
        q+=2;
        i=j-1;
    }
    str1[q]='\0';
    printf("Compressed string :\n%s",str1);
    return 0;
}