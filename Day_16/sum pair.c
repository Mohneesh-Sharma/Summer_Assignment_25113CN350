#include<stdio.h>
int main(){
    int a[100],i,n,j,sum,f=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter sum : ");
    scanf("%d",&sum);
    for(i=0;i<n-1;i++){
        if(f==1) break;
        else {
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("The pair with sum : %d is : (%d , %d) ",sum,a[i],a[j]);
                f=1;
                break;
            }
        }
        }
    }
    if(f==0) printf("***Pair not found***");
    return 0;
}