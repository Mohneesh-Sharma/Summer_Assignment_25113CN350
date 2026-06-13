#include<stdio.h>
int main(){
    int a[100],b[100],c[200],i,j,l,k=0,n,m;
    printf("enter number of elements of first and second array : \n");
    scanf("%d%d",&n,&m);
    printf("enter elements in Ist array :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter elements in IInd array :\n");
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                int f=0;
                for(l=0;l<k;l++){
                    if(a[i]==c[l]){
                    f=-1;
                    break;
                    }
                }
                if(f==0){
                    c[k]=a[i];
                    k++;
                    break;
                }
            }
        }
    }
    printf("Intersection of arrays :\n");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}