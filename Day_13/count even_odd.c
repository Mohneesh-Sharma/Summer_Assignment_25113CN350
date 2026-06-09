#include<stdio.h>
int main(){
    int i,n,a[100],ce=0,co=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0) ce++;
        else co++;
    }
    printf("The even number of elements : %d\nodd number of elements : %d",ce,co);
    return 0;
}