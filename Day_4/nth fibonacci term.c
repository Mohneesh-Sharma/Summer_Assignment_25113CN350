#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("ENTER THE nth TERM OF THE SERIES :");
    scanf("%d",&n);
    if(n<=0){
    printf("invalid");
    return 0;
    }
    printf("FIBONACCI SERIES nth TERM :\n");
    if(n==1)
    c=a;
    if(n==2)
    c=b;
    else{
        for(i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
    }
    printf("%d",c);
    return 0;
}