#include<stdio.h>
void perfect(int n){
    int i,sum=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0) sum+=i;
    }
    if(sum==n) printf("Perfect number");
    else printf("Not a perfect number");
}
int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    perfect(num);
    return 0;
}