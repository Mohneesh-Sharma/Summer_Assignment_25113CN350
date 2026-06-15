#include<stdio.h>
int main(){
    int r,c,a[100][100],i,j,sum=0;
    printf("Enter number of rows and columns of the matrix :");
    scanf("%d%d",&r,&c);
    if(r!=c){
         printf("Diagonal sum not possible"); 
         return 0;
        }
    printf("Enter elements in the matrix :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j || i+j==r-1) sum+=a[i][j];
        }
    }
    printf("The sum of diagonal elements of the matrix is : %d",sum);
    return 0;
}