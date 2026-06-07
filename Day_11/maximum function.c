#include<stdio.h>
void max(int n,int m){
    if(n>m) printf("%d: is the maximum number",n);
    else if(n<m) printf("%d: is the maximum number",m);
    else printf("numbers are equal");
}
int main(){
    int num1,num2;
    printf("enter numbers : ");
    scanf("%d%d",&num1,&num2);
    max(num1,num2);
    return 0;
}