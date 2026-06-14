#include<stdio.h>//via bubble sort
int main(){
    int n,i,a[100],temp;
    printf("enter number of elements of the array : ");
    scanf("%d",&n);
    printf("enter elements in the array :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array in descending order :\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
/* via selection sort
#include<stdio.h>
int main(){
    int n,i,a[100],temp;
    printf("enter number of elements of the array : ");
    scanf("%d",&n);
    printf("enter elements in the array :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        int max=i;
        for(int j=1+i;j<n;j++){
            if(a[j]>a[max]) max=j;
        }
        temp=a[max];
        a[max]=a[i];
        a[i]=temp;
    }
    printf("Sorted array in descending order :\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
*/