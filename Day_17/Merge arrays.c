#include<stdio.h>
int main(){
    int a[100],b[100],c[200],i,n,m;
    printf("enter number of elements of first and second array : \n");
    scanf("%d%d",&n,&m);
    printf("enter elements in Ist array :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter elements in IInd array :\n");
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++) c[i]=a[i];
    for(i=0;i<m;i++) c[n+i]=b[i];
    printf("Merged array :\n");
    for(i=0;i<m+n;i++) printf("%d ",c[i]);
    return 0;
}