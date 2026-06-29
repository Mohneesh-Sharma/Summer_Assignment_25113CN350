#include<stdio.h>
#include<unistd.h>
#include<string.h>

struct contact {
    char name[100];
    char email[100];
    char add[100];
    char contact[15];
}c[5000];

int main(){
    printf("**WELCOME**\n");
    int flag=0,choice,n=0;
    while(flag!=1){
        sleep(1);
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n1. Add contact\n2. Display all contacts\n3. Search contact\n4. Update contact\n5. Count contacts\n6. Exit\n");
        printf("\nEnter your choice : ");
        scanf(" %d",&choice); getchar();
        switch(choice){
            case 1:
            if(n==5000){
            printf("Maximum limit reached.\n");
            break;
            }
            printf("Enter name : ");
            fgets(c[n].name,sizeof(c[n].name),stdin);
            c[n].name[strlen(c[n].name)-1]='\0';
            printf("Enter email : ");
            fgets(c[n].email,sizeof(c[n].email),stdin);
            c[n].email[strlen(c[n].email)-1]='\0';
            printf("Enter contact  number : ");  scanf("%s",c[n].contact);  getchar();
            printf("Enter address : ");
            fgets(c[n].add,sizeof(c[n].add),stdin);
            c[n].add[strlen(c[n].add)-1]='\0';
            n++;
            break;
            case 2:
            if(n==0) printf("No contact is present.\n");
            else{
                for(int i=0;i<n;i++){
                     printf("\ncontact's name  : %s\n",c[i].name);
                     printf("contact's email  : %s\n",c[i].email);
                     printf("contact's address : %s\n",c[i].add);
                     printf("contact  number : %s\n",c[i].contact);   
                }
            }
            break;
            case 3:
            char emp[100];
            int f=0;
            printf("enter name : "); fgets(emp,100,stdin); emp[strlen(emp)-1]='\0';
            for(int i=0;i<n;i++){
                if(strcmp(emp,c[i].name)==0){
                    printf("contact's details :\n");
                    printf("\ncontact's name  : %s\n",c[i].name);
                    printf("contact's email  : %s\n",c[i].email);
                    printf("contact  address : %s\n",c[i].add);  
                    printf("contact  number : %s\n\n",c[i].contact); 
                    f=1;
                }
            }
            if(f==0) printf("contact not found!\n");
            break;
            case 4:
            f=0;
            printf("enter name for updation : "); fgets(emp,100,stdin); emp[strlen(emp)-1]='\0';
            for(int i=0;i<n;i++){
                if(strcmp(emp,c[i].name)==0){
                    printf("enter updated details :\n");
                    printf("\ncontact's name  : \n");fgets(c[i].name,sizeof(c[i].name),stdin); c[i].name[strlen(c[i].name)-1]='\0';
                    printf("contact's email  : \n");fgets(c[i].email,sizeof(c[i].email),stdin); c[i].email[strlen(c[i].email)-1]='\0';
                    printf("contact's address : \n"); fgets(c[i].add,sizeof(c[i].add),stdin); c[i].add[strlen(c[i].add)-1]='\0';
                    printf("contact  number : \n"); scanf("%s",c[i].contact);  
                    f=1;
                    break;
                }
            }
            if(f==0) printf("contact not found!\n");
            break;
            case 5:
            printf("Number of contacts are : %d ",n);
            break;
            case 6:
            flag=1;
            break;
            default:
            printf("Enter valid choice.\n");
        }
    }
    printf("Thank you ! Have a nice day.\n");
    return 0;
}