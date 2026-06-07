#include<stdio.h>
int sum(int n,int m){
    return n+m;
}
int main(){
    int num1,num2;
    printf("enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    printf("sum : %d",sum(num1,num2));
    return 0;
}