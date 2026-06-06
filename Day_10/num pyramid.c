#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=1;i<=n;i++){
        int a;
        for(j=1;j<=nsp;j++) printf(" ");
        for(k=1;k<=i;k++){
             printf("%d",k);
             a=k;
            }
        for(int l=a-1;l>=1;l--) printf("%d",l);
        nsp--;
        printf("\n");
    }
    return 0;
}