#include<stdio.h>
int main(){
    int num,i,lf=1,a;
    printf("enter the number :");
    scanf("%d",&num);
    a=num;
    for(i=2;i<=num;i++){
        while(num%i==0){
            //if(i>lf)//optional!
            lf=i;
            num/=i;
        }
    }
    printf("Largest prime factor of %d is : %d",a,lf);
    return 0;
}