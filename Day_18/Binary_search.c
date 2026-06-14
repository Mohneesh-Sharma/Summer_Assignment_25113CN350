#include<stdio.h>
int main(){
    int n,i,a[100],ele,mid,f=0;
    printf("enter number of elements of the array : ");
    scanf("%d",&n);
    printf("enter elements in the array :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter element to be searched : ");
    scanf("%d",&ele);
    int low=0;
    int high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==ele){
            printf("*** element found at position : %d ***",mid+1);
            f=-1;
            break;
        }
        else if(a[mid]<ele) low=mid+1;
        else high=mid-1;
    }
    if(f==0) printf("***element not found***");
    return 0;
}