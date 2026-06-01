#include<stdio.h>
int main(){
    int num,i,sumf=0;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++){
        if(num%i==0)
        sumf+=i;
    }
    if(sumf==num) printf("PERFECT NUMBER ");
    else printf("NOT A PERFECT NUMBER ");
    return 0;
}