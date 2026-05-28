#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0){
        count++;
        n/=10;
    }
    printf("number of digits of %d is : %d",n,count);
    return 0;
}