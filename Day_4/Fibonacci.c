#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("ENTER THE RANGE :\n");
    scanf("%d",&n);
    if(n<=0)
    printf("invalid");
    printf("FIBONACCI SERIES:\n");
    if(n==1)
    printf("%d",a);
    if(n==2)
    printf("%d\n%d",a,b);
    else{
        printf("%d\n%d\n",a,b);
        for(i=3;i<=n;i++){
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
    }
}