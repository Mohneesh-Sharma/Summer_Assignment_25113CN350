#include<stdio.h>
#include<unistd.h>
#include<string.h>

struct employee {
    char emp_name[100];
    char emp_designation[100];
    int emp_Batch;
    int emp_age;
    int emp_ID;
    char emp_contact[15];
    float emp_Salary;
}e[5000];

int main(){
    printf("**WELCOME**\n");
    int flag=0,choice,n=0,emp,f;
    while(flag!=1){
        sleep(1);
        printf("\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n1. Add employee\n2. Display all employees\n3. Search an employee\n4. Update an employee\n5. Count employees\n6. Exit\n");
        printf("\nEnter your choice : ");
        scanf(" %d",&choice);
        switch(choice){
            case 1:
            if(n==5000){
            printf("Maximum limit reached.\n");
            break;
            }
            printf("Enter employee's name : ");
            getchar();
            fgets(e[n].emp_name,sizeof(e[n].emp_name),stdin);
            e[n].emp_name[strlen(e[n].emp_name)-1]='\0';
            printf("Enter employee's designation : ");
            fgets(e[n].emp_designation,sizeof(e[n].emp_designation),stdin);
            e[n].emp_designation[strlen(e[n].emp_designation)-1]='\0';
            printf("Enter employee's batch : "); scanf(" %d",&e[n].emp_Batch);
            printf("Enter employee's age : ");  scanf(" %d",&e[n].emp_age);
            printf("Enter employee's ID : ");  scanf(" %d",&e[n].emp_ID);
            printf("Enter employee's contact  number : ");  scanf("%s",e[n].emp_contact);
            printf("Enter employee's salary : ");  scanf(" %f",&e[n].emp_Salary);
            n++;
            break;
            case 2:
            if(n==0) printf("No data is present.");
            else{
                for(int i=0;i<n;i++){
                     printf("\nemployee's name  : %s\n",e[i].emp_name);
                     printf("employee's designation  : %s\n",e[i].emp_designation);
                     printf("employee's batch : %d\n",e[i].emp_Batch);
                     printf("employee's age : %d\n",e[i].emp_age); 
                     printf("employee's ID : %d\n",e[i].emp_ID);  
                     printf("employee's contact  number : %s\n",e[i].emp_contact);  
                     printf("employee's salary : %.3f\n",e[i].emp_Salary);
                }
            }
            break;
            case 3:
            f=0;
            printf("enter employee's ID : "); scanf(" %d",&emp);
            for(int i=0;i<n;i++){
                if(e[i].emp_ID==emp){
                    printf("employee's details :\n");
                    printf("\nemployee's name  : %s\n",e[i].emp_name);
                    printf("employee's designation  : %s\n",e[i].emp_designation);
                    printf("employee's batch : %d\n",e[i].emp_Batch);
                    printf("employee's age : %d\n",e[i].emp_age); 
                    printf("employee's ID : %d\n",e[i].emp_ID);  
                    printf("employee's contact  number : %s\n",e[i].emp_contact);  
                    printf("employee's salary : %.3f\n",e[i].emp_Salary);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("employee not found!\n");
            break;
            case 4:
            f=0;
            printf("enter employee's ID for updation : "); scanf(" %d",&emp);
            for(int i=0;i<n;i++){
                if(e[i].emp_ID==emp){
                    printf("enter updated employee's details :\n");
                    printf("\nemployee's name  : \n"); getchar(); fgets(e[i].emp_name,sizeof(e[i].emp_name),stdin); e[i].emp_name[strlen(e[i].emp_name)-1]='\0';
                    printf("employee's designation  : \n");fgets(e[i].emp_designation,sizeof(e[i].emp_designation),stdin); e[i].emp_designation[strlen(e[i].emp_designation)-1]='\0';
                    printf("employee's batch : \n"); scanf(" %d",&e[i].emp_Batch);
                    printf("employee's age : \n"); scanf(" %d",&e[i].emp_age); 
                    printf("employee's ID : \n"); scanf(" %d",&e[i].emp_ID);  
                    printf("employee's contact  number : \n"); scanf("%s",e[i].emp_contact);  
                    printf("employee's salary : \n"); scanf(" %f",&e[i].emp_Salary);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("employee not found!\n");
            break;
            case 5:
            printf("Number of employees are : %d ",n);
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