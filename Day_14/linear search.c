#include<stdio.h>
int main(){
    int i,n,a[100],ele,f=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched : ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i]==ele){
            printf("Element is present at position : %d",i+1);
            f=-1;
            break;
        }
    }
    if(f==0) printf("Element is not present.");
    return 0;
}