#include<stdio.h>
int main(){
    int n,i,a[100],b[100];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int k=0;
    for(i=0;i<n;i++){
        int f=0,j=0;
        while(j<k){
            if(b[j]==a[i]){
                f=1;
                break;
            }
            j++;
        }
        if(f==0){
            b[k]=a[i];
            k++;
        }
    }
    printf("Without duplicates:\n");
    for(i=0;i<k;i++){
        printf("%d ",b[i]);
    }
    return 0;
}