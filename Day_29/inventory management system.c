#include<stdio.h>
#include<string.h>
#include<unistd.h>

struct product{
    int product_id;
    char product_name[100];
    int qty;
    float price;
}p[5000];

int main(){
    printf("**WELCOME**\n");

    int flag=0,choice,check,n=0,f=0,k=0;

    while(flag!=1){
        sleep(1);
        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Product\n2. Display All Products\n3. Search Product\n4. Update Product\n5. Delete Product\n6. Check Product Price\n7. Count Total Products\n8. Display Total Inventory Value\n9. Exit\n");

        printf("\nEnter your choice : ");
        scanf("%d",&choice); getchar();

        switch(choice){
            case 1:
            k=0;
            if (n==5000) printf("Inventory is full .\n");
            else{
                printf("Enter Product ID : "); scanf(" %d",&check); getchar();
                for(int i=0;i<n;i++){
                    if(p[i].product_id==check){ printf("This product already exists.\n"); k=1; break;}
                }
                if(k!=1){
                    p[n].product_id=check;
                    printf("Enter Product Name : "); fgets(p[n].product_name,sizeof(p[n].product_name),stdin); p[n].product_name[strlen(p[n].product_name)-1]='\0';
                    printf("Enter Quantity : "); scanf(" %d",&p[n].qty);
                    printf("Enter Price : "); scanf(" %f",&p[n].price);
                    sleep(1);
                    printf("Product Added Successfully.\n");
                    f=1;
                    n++;
                }
            }
            break;

            case 2:
            if(f==0){printf("Inventory is empty.\n"); break;}
            printf("**All PRODUCTS**\n");
            for(int i=0;i<n;i++){
                printf("\nProduct ID : %d\n",p[i].product_id);
                printf("Product name : %s\n",p[i].product_name);
                printf("Product Quantity : %d\n",p[i].qty);
                printf("Product Price : %.3f\n",p[i].price);
            }
            break;

            case 3:
            if(f==0){printf("Inventory is empty.\n"); break;}
            printf("Enter Product ID : "); scanf(" %d",&check);
            k=0;
            for(int i=0;i<n;i++){
                if(p[i].product_id==check){
                printf("\nProduct ID : %d\n",p[i].product_id);
                printf("Product name : %s\n",p[i].product_name);
                printf("Product Quantity : %d\n",p[i].qty);
                printf("Product Price : %.3f\n",p[i].price);
                k=1;
                break;
                }
            }
            if(k!=1) printf("Product Not Found.\n");
            break;

            case 4:
            if(f==0){printf("Inventory is empty.\n"); break;}
            printf("Enter Product ID : "); scanf(" %d",&check); getchar();
            k=0;
            for(int i=0;i<n;i++){
                if(p[i].product_id==check){
                printf("\nEnter Product ID : "); scanf(" %d",&p[i].product_id); getchar();
                printf("Enter product name : "); fgets(p[i].product_name,sizeof(p[i].product_name),stdin); p[i].product_name[strlen(p[i].product_name)-1]='\0';
                printf("Enter quantity : "); scanf(" %d",&p[i].qty);
                printf("Enter price : "); scanf(" %f",&p[i].price);
                k=1;
                sleep(1);
                printf("Product Updated Successfully.\n");
                break;
                }
            }
            if(k!=1) printf("Product Not Found.\n");
            break;
            
            case 5:
            if(f==0){printf("Inventory is empty.\n"); break;}
            printf("Enter Product ID : "); scanf(" %d",&check);
            k=0;
            for(int i=0;i<n;i++){
                if(p[i].product_id==check){
                for(int j=i;j<n-1;j++){
                    p[j]=p[j+1];
                }
                n--;
                k=1;
                sleep(1);
                printf("Product Deleted Successfully.\n");
                if(n==0) f=0;
                break;
                }
            }
            if(k!=1) printf("Product Not Found.\n");
            break;

            case 6:
            if(f==0){printf("Inventory is empty.\n"); break;}
            printf("Enter Product ID : "); scanf(" %d",&check);
            k=0;
            for(int i=0;i<n;i++){
                if(p[i].product_id==check){
                printf("Product Price : %.3f\n",p[i].price);
                k=1;
                break;
                }
            }
            if(k!=1) printf("Product Not Found.\n");
            break;

            case 7:
            if(f==0){printf("Inventory is empty.\n"); break;}
            printf("Total Products : %d\n",n);
            break;

            case 8:
            if(f==0){printf("Inventory is empty.\n"); break;}
            float total_val=0;
            for(int i=0;i<n;i++) total_val+=(p[i].price*p[i].qty);
            printf("Total Inventory Value : %.3f\n",total_val);
            break;

            case 9:
            flag=1;
            break;

            default:
            printf("Enter valid choice.\n");
        }
    }

    printf("Thank you ! Have a nice day.\n");

    return 0;
}