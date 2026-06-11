
#include<stdio.h>
int main(){
    int i,n,b,a[100],c[100];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter the position of rotation : ");
    scanf("%d",&b);
    b%=n;
    int j=0;
    for(i=b;i<n;i++){
        c[j]=a[i];
        j++;
    }
   for(i=0;i<b;i++){
    c[j]=a[i];
    j++;
   }
   printf("rotated array :\n");
   for(i=0;i<n;i++) printf("%d ",c[i]);
    return 0;
}