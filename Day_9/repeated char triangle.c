#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    char a=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) printf("%c",a);
        a++;
        printf("\n");
    }
    return 0;
}