#include<stdio.h>
#include<math.h>

void armstrong(int n){
    int sum=0,n1=n,n2=n,c=0;
    while(n!=0){
        c++;
        n/=10;
    }
    while(n1!=0){
        sum+=pow(n1%10,c);
        n1/=10;
    }
    if(sum==n2) printf("armstrong number");
    else printf("not an armstrong number");
}
int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    armstrong(num);
    return 0;
}