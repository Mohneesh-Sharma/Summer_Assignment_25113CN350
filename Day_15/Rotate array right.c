#include<stdio.h>
int main(){
    int i,n,b,a[100],c[100],p=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
   for(i=0;i<n;i++) scanf("%d",&a[i]);
   printf("Enter number of rotations : ");
   scanf("%d",&b);
   b%=n;//it is for b>n
   b=n-b;
   for(i=b;i<n;i++) {c[p]=a[i]; p++;}
   for(i=0;i<b;i++) {c[p]=a[i]; p++;}
   printf("Rotated array :\n");
   for(i=0;i<n;i++) printf("%d ",c[i]);
   return 0;
}