#include<stdio.h>
void prime(int n){
    int i,count=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0) count++;
    }
    if(count==1) printf("Prime number");
    else printf("Not a prime number");
}
int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    prime(num);
    return 0;
}