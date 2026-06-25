#include<stdio.h>
int main(){
    int a[100],b[100],c[200],n1,n2,i,j=0,k=0;
    printf("Enter number of elements in the first sorted array : ");
    scanf("%d",&n1);
    printf("Enter elements in the first array :\n");
    for(i=0;i<n1;i++) scanf("%d",&a[i]);
    printf("Enter number of elements in the second sorted array : ");
    scanf("%d",&n2);
     printf("Enter elements in the second array :\n");
    for(i=0;i<n2;i++) scanf("%d",&b[i]);
    for(i=0;i<n1+n2;i++){       //number of passes
        if(j>=n1){
            c[i]=b[k];
            k++;
        }
        else if(k>=n2){
            c[i]=a[j];
            j++;
        }
        else{
        if(a[j]<=b[k]){
            c[i]=a[j];
            j++;
        }
        else{
            c[i]=b[k];
            k++;
        }
        }
    }
    
    printf("Merged 'Sorted array' :\n");
    for(i=0;i<n1+n2;i++) printf("%d ",c[i]);
    return 0;
}

//easy approach
/*
#include<stdio.h>
int main(){
    int a[100],b[100],c[200],n1,n2,i,j=0,k=0;
    printf("Enter number of elements in the first sorted array : ");
    scanf("%d",&n1);
    printf("Enter elements in the first array :\n");
    for(i=0;i<n1;i++) scanf("%d",&a[i]);
    printf("Enter number of elements in the second sorted array : ");
    scanf("%d",&n2);
     printf("Enter elements in the second array :\n");
    for(i=0;i<n2;i++) scanf("%d",&b[i]);

    for(i=0;i<n1;i++) c[i]=a[j++];     //merging
    for(i=0;i<n2;i++) c[n1+i]=b[k++];

    for(i=0;i<n1+n2-1;i++){            //sorting
        int min=i;
        for(j=i+1;j<n1+n2;j++){
            if(c[min]>c[j]) min=j;
        }
        int temp=c[min];
        c[min]=c[i];
        c[i]=temp;
    }

    printf("Merged 'Sorted array' :\n");
    for(i=0;i<n1+n2;i++) printf("%d ",c[i]);
    return 0;
}
*/