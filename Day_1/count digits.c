#include<stdio.h>
int main(){
    int n,n1,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        count++;
        n/=10;
    }
    printf("number of digits of %d is : %d",n1,count);
    return 0;
}