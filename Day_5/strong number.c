#include<stdio.h>
int fact(int m){
    int f=1,i;
    for(i=1;i<=m;i++)
    f*=i;
    return f;
}
int main(){
    int num,i,sumf=0,numc;
    printf("enter the number :");
    scanf("%d",&num);
    numc=num;
    while(num!=0){
        sumf+=fact(num%10);
        num/=10;
    }
    if(sumf==numc) printf("STRONG NUMBER");
    else printf("NOT A STRONG NUMBER");

    return 0;
}