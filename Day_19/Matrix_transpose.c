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
    printf("Transpose of the matrix :\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++) printf("%d ",a[j][i]);
        printf("\n");
    }
    return 0;
}