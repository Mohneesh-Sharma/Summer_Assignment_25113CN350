#include<stdio.h>
int main(){
    int i,k,j,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nst=2*n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++) printf(" ");
        for(k=1;k<=nst;k++) printf("*");
        nst-=2;
        printf("\n");
    }
    return 0;
}