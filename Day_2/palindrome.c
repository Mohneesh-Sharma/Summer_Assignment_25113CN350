#include <stdio.h>
int main(){
    int num,rev=0,rem,num1;
    printf("enter your number : ");
    scanf("%d",&num);
    num1=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(num1==rev)
    printf("PALINDROME NUMBER");
    else
    printf("NOT A PALINDROME NUMBER");
    return 0;
}
