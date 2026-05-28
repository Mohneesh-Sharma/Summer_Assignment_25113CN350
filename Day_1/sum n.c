#include"stdio.h"
int main()
{
    int i,n,sum=0;
    printf("enter the number of natural number you want to sum:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of %d natural number is %d",n,sum);

    return 0;
}