#include<stdio.h>
int main(){
    int dec,i=0,rem,bin=0,a[1000],count=0;
    printf("enter the decimal number: ");
    scanf("%d",&dec);
    while(dec!=0){
       rem=dec%2;
       dec/=2;
       a[i]=rem;
       count++;
       i++;
    }
    printf("binary number is : \n");
    for(i=count-1;i>=0;i--)  printf("%d",a[i]);
    return 0;
}