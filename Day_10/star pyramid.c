#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++) printf(" ");
        for(k=1;k<=nst;k++) printf("*");
        nsp--;
        nst+=2;
        printf("\n");
    }
    return 0;
}