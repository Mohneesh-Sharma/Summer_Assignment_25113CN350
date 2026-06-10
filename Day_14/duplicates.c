#include<stdio.h>
int main(){
    int i,j,n,a[100],f=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("DUPLICATED ELEMENTS : \n");
    for(i=0;i<n;i++){
        int s=0;
        for(j=0;j<i;j++){
            if(a[j]==a[i]) {
                s=1;
                break;
            }
        }
        if(s) continue;
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
                printf("%d\n",a[j]);
                f++;
                break;
            }
        }
    }
    printf("Number of the duplicates is : %d",f);
    return 0;
}