#include<stdio.h>
int main(){
    int a[100],i,n,max_2;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int max=a[0];
    for(i=0;i<n;i++){
       if(a[i]>max){
        max=a[i];
       }
    }
    for(i=0;i<n;i++){
        if(a[i]!=max){
            max_2=a[i];
            break;
        }
    }
    
    for(i=0;i<n;i++){
       if(a[i]<max && a[i]>max_2) max_2=a[i];
    }
    printf("second largest element is : %d",max_2);
    return 0;
}
/*
#include<stdio.h>
int main(){
    int i,n,a[100];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int b=0;
    for(i=0;i<n;i++){
            if(a[i]>max){
            max=a[i];
             b=i;
            }
    }
    if (b==n-1) b--;
    else b++;
    int max1=a[b];
    for(i=0;i<n;i++){
            if(a[i]>max1 && a[i]<max){
            max1=a[i];
            }
    }
    printf("Second largest element is : %d",max1);
    return 0;
}
*/