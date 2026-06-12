#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int max_count=0;
    int max_ele;
    for(i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count>max_count){
                max_count=count;
                max_ele=a[i];
            }
    }
    printf("Element with maximum frequency of %d is : %d",max_count,max_ele);
    return 0;
}