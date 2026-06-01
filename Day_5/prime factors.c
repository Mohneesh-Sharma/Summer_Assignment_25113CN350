#include<stdio.h>
int main(){
    int num,i;
    printf("enter the number :");
    scanf("%d",&num);
    printf("prime factors of %d:\n",num);
    for(i=2;i<=num;i++){
        while(num%i==0){
        printf("%d\n",i);
        num=num/i;
        }
    }
    return 0;
}