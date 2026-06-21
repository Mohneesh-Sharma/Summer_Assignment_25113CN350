#include<stdio.h>
#include<string.h>
int main(){
    char str[200],Str1[200];
    printf("Enter your string :\n");
    fgets(str,200,stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str);
    int k=0;
    for(int i=0;i<l;i++){
        int f=0;
        for(int j=0;j<k;j++){
            if(str[i]==Str1[j]){
            f=-1;
            break;
            }
        }
        if(f==-1) continue;
        else{
            Str1[k]=str[i];
            k++;
        }
    }
    Str1[k]='\0';
    printf("String after removing the duplicates :\n%s",Str1);

    return 0;
}