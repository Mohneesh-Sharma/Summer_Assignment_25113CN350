#include<stdio.h>
#include<string.h>
int main(){
    char str[100],check[100],str1[100];
    printf("Enter First string :\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter Second string :\n");
    fgets(check,100,stdin);
    check[strlen(check)-1]='\0';
    int l2=strlen(check);
    int l=strlen(str);
    int f=1;
    if(l!=l2){
        printf("The string is not a rotated string.");
        return 0;
    }
    for(int m=1;m<=l;m++){//m=0 -> m<l
        int n=0;
        int  k=m;
    for(int i=k;i<l;i++){
        str1[n]=str[i];
        n++;
    }
    for(int j=0;j<k;j++){
        str1[n]=str[j];
        n++;
    }
    str1[l]='\0';
    f=strcmp(str1,check);
    if(f==0){
        printf("The string is a rotated string.");
        break;
    }
    }
    if(f!=0)
    printf("The string is not a rotated string.");
    return 0;
}