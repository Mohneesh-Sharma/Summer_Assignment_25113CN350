#include<stdio.h>
int fact(int);
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    printf("Factorial : %d",fact(num));
    return 0;
}
int fact(int n){
    if(n==1 || n==0) return 1;
    else{
        return n*fact(n-1);
    }
}