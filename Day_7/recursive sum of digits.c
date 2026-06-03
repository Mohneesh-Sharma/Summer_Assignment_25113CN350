#include<stdio.h>
int sumd(int);
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("sum of digits : %d",sumd(num));
    return 0;
}
int sumd(int n){
    if(n==0) return 0;
    else
    return n%10+sumd(n/10);
}
