#include<stdio.h>
int main(){
    int a[100],n,m,i;
    printf("enter number of elements to be entered (n) : ");
    scanf("%d",&n);
    printf("enter %d elements : \n",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    int exp_sum=n*(n+1)/2;
    int act_sum=0;
    for(i=0;i<n-1;i++){
        act_sum+=a[i];
    }
    //A.P sum formula 
    m=exp_sum-act_sum;
    printf("missing number : %d ",m);
    return 0;
}