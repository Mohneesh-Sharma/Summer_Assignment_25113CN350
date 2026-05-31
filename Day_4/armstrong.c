#include<stdio.h>
#include<math.h>
int main(){
    int count=0,num,num1,sum=0,rem,num2;
    printf("enter your number : ");
    scanf("%d",&num);
    num1=num;
    while(num!=0){
        count++;
        num/=10;
    }
    num2=num1;
    while(num1!=0){
        rem=num1%10;
        sum+=pow(rem,count);
        num1/=10;
    }
    if(sum==num2)
    printf("%d is an armstrong number.",num2);
    else
    printf("%d is not an armstrong number.",num2);

    return 0;
}