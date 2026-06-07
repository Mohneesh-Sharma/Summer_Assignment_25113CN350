#include<stdio.h>
int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++) f*=i;
    return f;
}
int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    printf("Factorial : %d",fact(num));
    return 0;
}