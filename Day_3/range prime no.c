#include<stdio.h>
int main(){
    int num,i;
    printf("enter a range : ");
    scanf("%d",&num);
    printf("PRIME NUMBERS :\n");
    for(i=1;i<=num;i++){
        int c=0;
        int j;
        for(j=1;j<=i/2;j++){
            if(i%j==0)
            c++;
        }
        if(c==1)
        printf("%d\n",i);
    }
    return 0;
}