#include<stdio.h>
#include<unistd.h>

int main(){
    printf("**WELCOME**\n");
    int flag=0,choice;
    int n,a[100],f=0,ele,pos,k=0;
    int sum=0;
    float avg;    
    while(flag!=1){
        sleep(1);
        printf("\n========== ARRAY OPERATIONS SYSTEM ==========\n1. Input Array\n2. Display Array\n3. Search Element\n4. Insert Element\n5. Delete Element\n6. Update Element\n7. Find Maximum Element\n8. Find Minimum Element\n9. Calculate Sum\n10. Calculate Average\n11. Sort Array (Ascending)\n12. Sort Array (Descending)\n13. Reverse Array\n14. Count Elements\n15. Exit\n");
        printf("\nEnter your choice : ");
        scanf(" %d",&choice);

        switch(choice){
            case 1:
            printf("Enter number of elements : ");
            scanf(" %d",&n);
            printf("Enter elements :\n");
            for(int i=0;i<n;i++) scanf(" %d",&a[i]);
            f=1;
            printf("\nArray inserted successfully.\n");
            break;
            case 2:
            if(f!=1) printf("No array is inserted.\n");
            else{
            printf("Array :\n");
            for(int i=0;i<n;i++) printf("%d ",a[i]);
            }
            break;
            case 3:
            if(f!=1) printf("No array is inserted.\n");
            else{
            printf("Enter element :\n");scanf("%d",&ele);
            k=0;
            for(int i=0;i<n;i++){
            if(a[i]==ele){
            printf("*** element found at position : %d ***",i+1);
            k=-1;
            break;
            }
            }
            if(k!=-1) printf("***element not found***");
            }
            break;
            case 4:
            if(f!=1) printf("No array is inserted.\n");
            else{
            printf("Enter element to be inserted :\n"); scanf(" %d",&ele);
            printf("\nEnter position : "); scanf(" %d",&pos);
            if(pos>n+1 || pos<=0 ){printf("\nPosition is invalid .\n");}
            else {
            n++;
            for(int i=n-1;i>=pos;i--) a[i]=a[i-1];
            a[pos-1]=ele;
            printf("\nElement inserted successfully.\n");
              }
            }
            break;
            case 5:
            if(f!=1) printf("No array is inserted.\n");
            else{
                k=0;
            printf("Enter element to be deleted :\n"); scanf(" %d",&ele);
            for(int i=0;i<n;i++){
                if(a[i]==ele){k=1; pos=i; break;}
            }
            
            if(k!=1){printf("\nElement is not present.\n");}
            else {
            for(int i=pos;i<n-1;i++) a[i]=a[i+1];
            n--;
            printf("\nElement deleted successfully.\n");
              }
            }
            break;
            case 6:
            if(f!=1) printf("No array is inserted.\n");
            else{
                k=0;
            printf("Enter element to be updated :\n"); scanf(" %d",&ele);
            for(int i=0;i<n;i++){
                if(a[i]==ele){k=1; pos=i; break;}
            }
            
            if(k!=1){printf("\nElement is not present.\n");}
            else {
            printf("Enter updated element :\n"); scanf(" %d",&ele);
            a[pos]=ele;
            printf("\nElement updated successfully.\n");
              }
            }
            break;
            case 7:
            if(f!=1) printf("No array is inserted.\n");
            else{
                int max=a[0];
            for(int i=0;i<n;i++){
                if(a[i]>max) { max=a[i]; }
            }
            printf("\nMaximum element : %d\n",max);
            }
            break;
            case 8:
            if(f!=1) printf("No array is inserted.\n");
            else{
                int min=a[0];
            for(int i=0;i<n;i++){
                if(a[i]<min) { min=a[i]; }
            }
            printf("\nMinimum element : %d\n",min);
            }
            break;
            case 9:
            if(f!=1) printf("No array is inserted.\n");
            else{
                sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
            printf("\nSum of elements : %d\n",sum);
            }
            break;
            case 10:
            if(f!=1) printf("No array is inserted.\n");
            else{
                sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
            avg=(float)sum/n;
            printf("\nAverage of elements : %.3f\n",avg);
            }
            break;
            case 11:
            if(f!=1)  printf("No array is inserted.\n");
            else{
               for(int i=0;i<n-1;i++){
                  for(int j=0;j<n-1-i;j++){
                    if(a[j]>a[j+1]){
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                  }
               }
               sleep(1);
               printf("\nArray is sorted(Ascendingly) .\n");
            }
            break;
            case 12:
            if(f!=1)  printf("No array is inserted.\n");
            else{
               for(int i=0;i<n-1;i++){
                  for(int j=0;j<n-1-i;j++){
                    if(a[j]<a[j+1]){
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                  }
               }
               sleep(1);
               printf("\nArray is sorted(Descendingly) .\n");
            }
            break;
            case 13:
            if(f!=1)  printf("No array is inserted.\n");
            else{
                printf("\nReverse of the array :\n");
               for(int i=n-1;i>=0;i--)
               printf(" %d",a[i]);
            }
            break;

            case 14:
            printf("Number of elements : %d",n);
            break;
            case 15:
            flag=1;
            break;

            default:
            printf("Enter valid choice.\n");
        }
    }

    printf("Thank you ! Have a nice day.\n");
    return 0;
}