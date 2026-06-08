#include<stdio.h>
void palindrome(int n){
    int rev=0,m=n;
    while(n!=0){
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==m) printf("palindrome number");
    else printf("not a palindrome number");
}
int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}