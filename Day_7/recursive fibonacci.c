#include<stdio.h>
int fibo(int);
int main(){
    int n,i;
    printf("enter the range :");
    scanf("%d",&n);
    if(n<=0) printf("invalid");
    else{
        printf("Fibonacci series :\n");
        for(i=1;i<=n;i++) printf("%d\n",fibo(i));
    }
    return 0;
}
int fibo(int m){
    if (m==1) return 0;
    else if (m==2) return 1;
    else return fibo(m-1)+fibo(m-2);
}