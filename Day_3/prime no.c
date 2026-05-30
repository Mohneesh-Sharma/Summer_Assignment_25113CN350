#include<stdio.h>
int main(){
    int num,i,c=0;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==1)
    printf("PRIME NUMBER");
    else
    printf("NOT A PRIME NUMBER");
    return 0;
}