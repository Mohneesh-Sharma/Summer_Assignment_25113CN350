#include<stdio.h>
int main(){
    int i,n,a[100],min,max;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("The largest element : %d\nsmallest element : %d",max,min);
    return 0;
}