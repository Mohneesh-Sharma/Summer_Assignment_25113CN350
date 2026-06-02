#include<stdio.h>
int main(){
    int num,set_bits=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    while(num!=0){
        if(num%2==1) set_bits++;
        num/=2;
    }
    printf("The total number of set bits in the number is : %d",set_bits);
    return 0;
}