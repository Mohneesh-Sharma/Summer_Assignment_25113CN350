#include<stdio.h>
int main(){
    int i,n,a[100],ele,f=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched for frequency: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i]==ele){
            f++;
        }
    }
    printf("Frequency of the element is : %d",f);
    return 0;
}