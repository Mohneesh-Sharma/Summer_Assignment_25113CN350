#include<stdio.h>
int main(){
    int a[100],b[100],c[100],i,j,n,m;
    printf("enter number of elements of first and second array : \n");
    scanf("%d%d",&n,&m);
    printf("enter elements in Ist array :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter elements in IInd array :\n");
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    int k=0;
    int used[100]={0};
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j] && used[j]==0){
                c[k]=a[i];
                used[j]=1;
                k++;
                break;
            }
        }
    }
    printf("common elements of arrays :\n");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}