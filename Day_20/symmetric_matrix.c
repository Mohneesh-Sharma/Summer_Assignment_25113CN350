#include<stdio.h>
int main(){
    int r,c,a[100][100],i,j;
    printf("Enter number of rows and columns of the matrix :");
    scanf("%d%d",&r,&c);
    if(r!=c)
    {
        printf("Matrix is not Symmetric");
        return 0;
    }
    printf("Enter elements in the matrix :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=a[j][i])
            {
                printf("Matrix is not Symmetric");
                return 0;
            }
        }
    }
    printf("Matrix is Symmetric");
    return 0;
}