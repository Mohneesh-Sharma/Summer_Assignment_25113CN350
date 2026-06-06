#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=1;i<=n;i++){
        char a=65;
        for(j=1;j<=nsp;j++) printf(" ");
        for(k=1;k<=i;k++){
             printf("%c",a);
             a++;
            }
        for(int q=a-2;q>=65;q--) printf("%c",q);
        nsp--;
        printf("\n");
    }
    return 0;
}