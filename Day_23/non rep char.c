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
        if(count==1){
            printf("The first non-repeating character is :%c",str[i]);
            f=1;
            break;
        }
    }
    if(f!=1)
    printf("No non-repeating character");
    return 0;
}


/*
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],temp[100]={0};
    printf("Enter your string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str);
    int k=0;
    for(int i=0;i<l;i++){
        char c=str[i];
        int f=0;
        int flag=0;
        for(int j=0;j<k;j++){
            if(c==temp[j]){
                flag=-1;
                break;
            }
        }
        if(flag==-1){
            if(i==l-1){
            printf("No non-repeating character");
            return 0;
            }
            else{
                continue;
            }
        }
        for(int j=i+1;j<l;j++){
            if(str[j]==c){
              f=-1;
              break;  
            }
            else{
                f=1;
            }
        }
        
        if(f==1 || f==0){
            printf("The first non-repeating character is :%c",c);
            break;
        }
        temp[k]=c;
        k++;
    }
    
    return 0;
}
*/