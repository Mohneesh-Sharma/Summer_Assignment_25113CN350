#include<stdio.h>
int main(){
    int r,c,a[100][100],i,j;
    printf("Enter number of rows and columns of the matrix :");
    scanf("%d%d",&r,&c);
    printf("Enter elements in the matrix :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Row-Wise Sum :\n");
    for(i=0;i<r;i++){
        int sum_row=0;
        for(j=0;j<c;j++){
            sum_row+=a[i][j];
        }
        printf("Sum of row %d is : %d\n",i+1,sum_row);
    }
    return 0;
}