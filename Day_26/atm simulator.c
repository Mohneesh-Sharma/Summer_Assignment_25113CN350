#include<stdio.h>
#include<unistd.h>

int main(){
    int pin=1234;
    int choice,balance=10000,user;
    printf("**WELCOME**\nPlease enter the PIN : ");
    scanf(" %d",&user);
    if(user!=pin){
        printf("Invalid PIN!");
        return 0;
    }
    int amount=0,deposit=0,flag=0;
    while(flag!=1){
        sleep(1);
        printf("\n=====ATM MENU=====\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Change PIN\n5. Mini Statement\n6. Exit");
        printf("\nEnter your choice : ");
        scanf(" %d",&choice);
        int input;
        switch(choice){
            case 1:
            printf("Current Balance : %d\n",balance);
            break;
            case 2:
            printf("Enter deposit amount : ");
            scanf(" %d",&input);
            if(input<=0){
                printf("\n**Invalid amount entered.Please enter valid amount.**\n");
                break;
            }
            else{
            deposit=input;
            balance+=deposit;
            printf("Updated balance : %d\n",balance);
            break;
            }
            case 3:
            printf("Enter withdrawal amount : ");
            scanf(" %d",&input);
            printf("Processing ");
            for(int i=1;i<=3;i++){
                printf(".");
                sleep(1);
            }
            if(input<=0){
                printf("\n**Invalid amount entered.Please enter valid amount.**\n");
                break;
            }
            else if(input>balance){
                printf("\n**Insufficient balance**\n");
                break;
            }
            else{
            amount=input;
            balance-=input;
            printf("\n**Collect your cash**\n");
            sleep(2);
            printf("**Withdrawal successful**\n");
            break;
            }
            case 4:
            printf("Enter current PIN :\n");
            scanf(" %d",&input);
            printf("Processing ");
            for(int i=1;i<=3;i++){
                printf(".");
                sleep(1);
            }
            if(input==pin){
                while(1){
                int new_pin;
                printf("\nEnter new PIN :\n");
                scanf(" %d",&new_pin);
                if(new_pin>=1000 && new_pin<=9999){
                    pin=new_pin;
                    break;
                }
                else printf("**Enter a valid 4-digit PIN**");
                }
                printf("PIN is updated successfully.\n");
                break;
            }
            else{
                printf("***Invalid PIN***\n");
                break;
            }
            case 5:
            printf("Processing ");
            for(int i=1;i<=3;i++){
                printf(".");
                sleep(1);
            }
            printf("\n\nCurrent balance : %d\n",balance);
            printf("Last deposited amount : %d\n",deposit);
            printf("Last withdrawn amount : %d\n",amount);
            break;
            case 6: 
            flag=1;
            break;
            default:
            printf("Enter correct choice.\n");
        }
    }
    printf("Thank you ! Have a nice day.\n");
    return 0;
}