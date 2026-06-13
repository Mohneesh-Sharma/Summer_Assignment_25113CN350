#include<stdio.h>
int main(){
    int a[100],b[100],c[200],i,j,n,m;
    printf("enter number of elements of first and second array : \n");
    scanf("%d%d",&n,&m);
    printf("enter elements in Ist array :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter elements in IInd array :\n");
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    int k=0;
    for(i=0;i<n;i++){
        int f=0;
        for(j=0;j<k;j++){
            if(c[j]==a[i]){
            f=-1;
            break;
        }
        }
        if(f==0){
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<m;i++){
        int f=0;
        for(j=0;j<k;j++){
            if(c[j]==b[i]){
            f=-1;
            break;}
        }
        if(f==0){
            c[k]=b[i];
            k++;
        }
    }
    printf("union of arrays :\n");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}