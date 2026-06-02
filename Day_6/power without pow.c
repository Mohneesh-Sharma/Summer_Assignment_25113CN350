#include<stdio.h>
int main(){
    int x,a,n,b,y=1;
    printf("enter your number and power :");
    scanf("%d%d",&x,&n);
    a=x; b=n;
    while(n!=0){
        y*=x;
        n--;
    }
    printf("The value of %d^%d is : %d",a,b,y);
    return 0;
}