#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter number of lines :");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) printf("%d",a);
        a++;
        printf("\n");
    }
    return 0;
}