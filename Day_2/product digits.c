#include <stdio.h>
int main(){
    int num,pro=1;
    printf("enter your number : ");
    scanf("%d",&num);
    while(num!=0){
        pro*=num%10;
        num/=10;
    }
    printf("PRODUCT OF THE DIGITS IS :%d",pro);
    return 0;
}
