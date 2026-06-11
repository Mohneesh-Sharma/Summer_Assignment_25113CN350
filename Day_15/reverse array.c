#include<stdio.h>
int main(){
    int i,n,a[100],b[100];
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--) b[n-1-i]=a[i];
    printf("reverse of the array :\n");
    for(i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}