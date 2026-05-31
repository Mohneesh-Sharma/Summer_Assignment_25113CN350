#include<stdio.h>
#include<math.h>
int main(){
    int num,i,j;
    printf("enter your range : ");
    scanf("%d",&num);
    printf("ARMSTRONG NUMBERS :)\n");
   for(j=1;j<=num;j++){
    int num1,num2,sum=0,count=0,rem;
    i=j;
    num1=i;
    while(i!=0){
        count++;
        i/=10;
    }
    num2=num1;
    while(num1!=0){
        rem=num1%10;
        sum+=pow(rem,count);
        num1/=10;
    }
    if(sum==num2)
    printf("%d\n",num2);
    }
}