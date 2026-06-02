#include<stdio.h>
#include<math.h>
int main(){
    int bin,dec=0,a,i=0;
    printf("enter the binary number : ");
    scanf("%d",&bin);
    while(bin!=0){
        a=bin%10;
        dec+=a*pow(2,i);
        i++;
        bin/=10;
    }
    printf("Decimal number is : %d",dec);
    return 0;
}