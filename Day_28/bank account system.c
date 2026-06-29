#include<stdio.h>
#include<unistd.h>
#include<string.h>

struct account {
    char acc_name[100];
    int acc_num;
    char acc_type[30];
    char acc_contact[15];
    float acc_balance;
}a[5000];

int main(){
    printf("**WELCOME**\n");
    int flag=0,choice,n=0;
    int acc,f=0;
    int check,duplicate=0;
    float input;;
    while(flag!=1){
        sleep(1);
        printf("\n========== BANK ACCOUNT SYSTEM ==========\n1. Create account\n2. Display all accounts\n3. Search an account\n4. Update an account\n5. Count accounts\n6. Deposit Money\n7. Withdraw Money\n8. Check balance\n9. Delete Account\n10. Exit\n");
        printf("\nEnter your choice : ");
        scanf(" %d",&choice);
        getchar();
        switch(choice){
            case 1:
            if(n==5000){
            printf("Maximum limit reached.\n");
            break;
            }
            duplicate=0;
            printf("Enter account number  : "); scanf(" %d",&check); getchar();
            for(int i=0;i<n;i++){
                if(check==a[i].acc_num){
                    duplicate =1;
                    break;
                }
            }
            if(duplicate==1){ printf("This account already exists.\n"); break;}
            a[n].acc_num=check;
            printf("Enter account holder's name : ");
            fgets(a[n].acc_name,sizeof(a[n].acc_name),stdin);
            a[n].acc_name[strlen(a[n].acc_name)-1]='\0';
            printf("Enter account type : ");
            fgets(a[n].acc_type,sizeof(a[n].acc_type),stdin);
            a[n].acc_type[strlen(a[n].acc_type)-1]='\0';
            printf("Enter account contact  number : ");  scanf("%s",a[n].acc_contact);
            printf("Enter account balance : ");scanf(" %f",&check);
             if(check < 0){
             printf("Invalid balance.\n");
             break;
            }
            else a[n].acc_balance=check;
            n++;
            break;
            case 2:
            if(n==0) printf("No data is present.");
            else{
                for(int i=0;i<n;i++){
                     printf("\naccount holder  : %s\n",a[i].acc_name);
                     printf("account type  : %s\n",a[i].acc_type);
                     printf("account number  : %d\n",a[i].acc_num);
                     printf("account contact  number : %s\n",a[i].acc_contact);  
                     printf("account balance : %.3f\n",a[i].acc_balance);
                }
            }
            break;
            case 3:
            f=0;
            printf("Enter account number : "); scanf(" %d",&acc);
            for(int i=0;i<n;i++){
                if(a[i].acc_num==acc){
                    printf("account details :\n");
                    printf("\naccount holder  : %s\n",a[i].acc_name);
                    printf("account type  : %s\n",a[i].acc_type);
                    printf("account number  : %d\n",a[i].acc_num);
                    printf("account contact  number : %s\n",a[i].acc_contact);  
                    printf("account balance : %.3f\n",a[i].acc_balance);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("account details not found!\n");
            break;
            case 4:
            f=0;
            duplicate=0,check=0;
            printf("Enter account number for updation : "); scanf(" %d",&acc);
            for(int i=0;i<n;i++){
                if(a[i].acc_num==acc){
                    printf("Enter updated account details :\n");
                    printf("\naccount number  : \n"); scanf(" %d",&check);
                    for(int s=0;s<n;s++){
                     if(check==a[s].acc_num && s!=i){
                    duplicate =1;
                    break;
                     }
                     }
                     if(duplicate==1){ printf("This account already exists.\n"); break;}
                    a[i].acc_num=check;
                    printf("account holder  : \n"); getchar(); fgets(a[i].acc_name,sizeof(a[i].acc_name),stdin); a[i].acc_name[strlen(a[i].acc_name)-1]='\0';
                    printf("account type  : \n");fgets(a[i].acc_type,sizeof(a[i].acc_type),stdin); a[i].acc_type[strlen(a[i].acc_type)-1]='\0';
                    printf("account contact  number : \n"); scanf("%s",a[i].acc_contact);  
                    printf("account balance : \n"); scanf(" %f",&a[i].acc_balance);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("account not found!\n");
            break;
            case 5:
            printf("Number of accounts are : %d ",n);
            break;
            case 6:
            f=0;
            printf("Enter account number : "); scanf(" %d",&acc);
            for(int i=0;i<n;i++){
                if(a[i].acc_num==acc){
                    printf("Enter money to deposit : "); scanf(" %f",&input);
                     printf("Processing ");
                        for(int i=1;i<=3;i++){
                         printf(".");
                         sleep(1);
                         }
                         if(input<=0){
                         printf("\n**Invalid amount Entered.Please Enter valid amount.**\n");
                         break;
                         }
                    a[i].acc_balance+=input;
                    printf("Updated balance : %.3f\n",a[i].acc_balance);
                    printf("\nMoney deposited successfully.\n");
                    f=1;
                    break;
                }
            }
            if(f==0) printf("account details not found!\n");
            break;
            case 7:
            f=0;
            printf("Enter account number : "); scanf(" %d",&acc);
            for(int i=0;i<n;i++){
                if(a[i].acc_num==acc){
                    f=1;
                    printf("Enter money to withdraw : "); scanf(" %f",&input);
                    printf("Processing ");
                for(int i=1;i<=3;i++){
                printf(".");
                sleep(1);
                }
               if(input<=0){
                printf("\n**Invalid amount Entered.Please Enter valid amount.**\n");
                break;
                }
                else if(input>a[i].acc_balance){
                printf("\n**Insufficient balance**\n");
                break;
                }
               else{
                a[i].acc_balance-=input;
                printf("\n**Collect your cash**\n");
                sleep(2);
                printf("**Withdrawal successful**\n");
                printf("Remaining Balance : %.2f\n",a[i].acc_balance);
                break;
                }
               }
            }
            if(f==0) printf("Account details not found!\n");
            break;
            case 8:
            f=0;
            printf("Enter account number : "); scanf(" %d",&acc);
            printf("Processing ");
                for(int i=1;i<=3;i++){
                printf(".");
                sleep(1);
                }
            for(int i=0;i<n;i++){
                if(a[i].acc_num==acc){
                    printf("Balance : %.3f",a[i].acc_balance);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("Account details not found.\n");
            break;
            case 9:
            f=0;
            printf("Enter account number for deletion : "); scanf(" %d",&acc);
            printf("Processing ");
            for(int i=1;i<=3;i++){
                printf(".");
                sleep(1);
            }
            for(int i=0;i<n;i++){
                if(a[i].acc_num==acc){
                    for(int j=i;j<n-1;j++){
                        a[j]=a[j+1];
                    }
                    n--;
                    f=1;
                    printf("Account deleted successfully .\n");
                    break;
                }
            }
            if(f==0) printf("Account details not found.\n");
            break;
            case 10:
            flag=1;
            break;
            default:
            printf("Enter valid choice.\n");
        }
    }
    printf("Thank you ! Have a nice day.\n");
    return 0;
}