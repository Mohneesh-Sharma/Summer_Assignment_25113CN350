#include<stdio.h>
int main(){
    int i,n,a[100],sum=0;
    float avg;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) sum+=a[i];
    avg=(float)sum/n;
    printf("The sum of elements : %d\naverage of elements : %.2f",sum,avg);
    return 0;
}