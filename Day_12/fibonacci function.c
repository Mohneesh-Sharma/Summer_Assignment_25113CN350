#include<stdio.h>
void fibo(int n){
    int a=0,b=1,c,i;
    if (n<=0) printf("invalid");
    else if(n==1) printf("%d",a);
    else if(n==2) printf("%d\n%d",a,b);
    else{
        printf("%d\n%d\n",a,b);
        for(i=3;i<=n;i++){
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
    }
}
int main(){
    int num;
    printf("enter range : ");
    scanf("%d",&num);
    fibo(num);
    return 0;
}