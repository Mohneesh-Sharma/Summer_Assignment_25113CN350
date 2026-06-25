#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],common[100]={0},used[100]={0};
    printf("Enter first string :\n");
    fgets(str1,100,stdin);
    str1[strlen(str1)-1]='\0';
    printf("Enter second string :\n");
    fgets(str2,100,stdin);
    str2[strlen(str2)-1]='\0';
    int l1=strlen(str1),l2=strlen(str2);
    int n=0;//,k=0; if duplicates not allowed !!
    for(int i=0;i<l1;i++){
        for(int j=0;j<l2;j++){
            //int flag=0; if duplicates not allowed !!
            if(str1[i]==str2[j]){
                // for(int q=0;q<k;q++){        if duplicates not allowed !!     
                //     if(used[q]==str1[i]){
                //         flag=-1;
                //         break;
                //     }
                // }
                // if(flag==-1) continue;
                if(used[j]!=0) continue;  // remove this  if duplicates not allowed !!
                else used[j]=1;           // remove this if duplicates not allowed !!
                common[n]=str1[i];
                n++;
                // used[k]=str1[i];  // if duplicates not allowed !!
                // k++;
            }
        }
    }
    common[n]='\0';
    printf("Common characters string :\n%s",common);
    return 0;
}