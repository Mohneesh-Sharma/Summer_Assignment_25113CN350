#include<stdio.h>
int main(){
    int r1,r2,c1,c2,a[100][100],b[100][100],c[100][100],i,j;
    printf("Enter number of rows and columns of the first matrix :");
    scanf("%d%d",&r1,&c1);
    printf("Enter number of rows and columns of the second matrix :");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){
         printf("Multiplication not possible"); 
         return 0;
        }
        printf("enter elements in the first matrix :\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
        }
        printf("enter elements in the second matrix :\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0;
                for(int k=0;k<r2;k++) c[i][j]+=a[i][k]*b[k][j];
            }
        }
        printf("Multiplication of both matrices :\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++)
            printf("%d ",c[i][j]);
            printf("\n");
        }
    return 0;
}