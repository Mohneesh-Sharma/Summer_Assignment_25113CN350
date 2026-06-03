#include<stdio.h>
#include<math.h>
int rev(int n){
    int  count=0,m=n;
    while(m!=0){
        count++;
        m/=10;
    }
    if(n==0) return 0;
    else return (n%10)*pow(10,count-1)+rev(n/10);
}
int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    printf("reverse of %d is : %d",num,rev(num));
    return 0;
}