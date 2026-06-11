#include<stdio.h>
int main(){
    int i,n,a[100],c[100];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int b=0,d=n-1;
    for(i=0;i<n;i++){
        if(a[i]!=0) {c[b]=a[i]; b++;}
        else{c[d]=0; d--;}
    }
    printf("Array after shifting all the zeroes to the end :\n");
    for(i=0;i<n;i++) printf("%d ",c[i]);
    return 0;
}