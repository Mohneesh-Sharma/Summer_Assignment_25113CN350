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
    printf("Column-Wise Sum :\n");
    for(i=0;i<c;i++){
        int sum_column=0;
        for(j=0;j<r;j++){
            sum_column+=a[j][i];
        }
        printf("Sum of column %d is : %d\n",i+1,sum_column);
    }
    return 0;
}