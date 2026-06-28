#include<stdio.h>
#include<unistd.h>
#include<string.h>
struct student {
    char std_name[100];
    int std_class;
    int std_age;
    int std_rollnum;
    char std_contact[15];
    float std_marks;
}s[5000];
int main(){
    printf("**WELCOME**\n");
    int flag=0,choice,n=0;
    while(flag!=1){
        sleep(1);
        printf("\n========== STUDENT RECORD SYSTEM ==========\n1. Add Student\n2. Display All Students\n3. Search Student\n4. Update Student\n5. Count Students\n6. Exit\n");
        printf("\nEnter your choice : ");
        scanf(" %d",&choice);
        switch(choice){
            case 1:
            if(n==5000){
            printf("Maximum limit reached.\n");
            break;
            }
            printf("Enter student's name : ");
            getchar();
            fgets(s[n].std_name,sizeof(s[n].std_name),stdin);
            s[n].std_name[strlen(s[n].std_name)-1]='\0';
            printf("Enter student's class : "); scanf(" %d",&s[n].std_class);
            printf("Enter student's age : ");  scanf(" %d",&s[n].std_age);
            printf("Enter student's Roll number : ");  scanf(" %d",&s[n].std_rollnum);
            printf("Enter student's contact  number : ");  scanf("%s",s[n].std_contact);
            printf("Enter student's marks : ");  scanf(" %f",&s[n].std_marks);
            n++;
            break;
            case 2:
            if(n==0) printf("No data is present.");
            else{
                for(int i=0;i<n;i++){
                     printf("\nstudent's name  : %s\n",s[i].std_name);
                     printf("student's class : %d\n",s[i].std_class);
                     printf("student's age : %d\n",s[i].std_age); 
                     printf("student's Roll number : %d\n",s[i].std_rollnum);  
                     printf("student's contact  number : %s\n",s[i].std_contact);  
                     printf("student's marks : %.3f\n",s[i].std_marks);
                }
            }
            break;
            case 3:
            int std,f=0;
            printf("enter student's roll number : "); scanf(" %d",&std);
            for(int i=0;i<n;i++){
                if(s[i].std_rollnum==std){
                    printf("student's details :\n");
                    printf("\nstudent's name  : %s\n",s[i].std_name);
                    printf("student's class : %d\n",s[i].std_class);
                    printf("student's age : %d\n",s[i].std_age); 
                    printf("student's Roll number : %d\n",s[i].std_rollnum);  
                    printf("student's contact  number : %s\n",s[i].std_contact);  
                    printf("student's marks : %.3f\n",s[i].std_marks);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("Student not found!\n");
            break;
            case 4:
            std,f=0;
            printf("enter student's roll number for updation : "); scanf(" %d",&std);
            for(int i=0;i<n;i++){
                if(s[i].std_rollnum==std){
                    printf("enter updated student's details :\n");
                    printf("\nstudent's name  : "); getchar(); fgets(s[i].std_name,sizeof(s[i].std_name),stdin); s[i].std_name[strlen(s[i].std_name)-1]='\0';
                    printf("student's class : "); scanf(" %d",&s[i].std_class);
                    printf("student's age : "); scanf(" %d",&s[i].std_age); 
                    printf("student's Roll number : "); scanf(" %d",&s[i].std_rollnum);  
                    printf("student's contact  number : "); scanf("%s",s[i].std_contact);  
                    printf("student's marks : "); scanf(" %f",&s[i].std_marks);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("Student not found!\n");
            break;
            case 5:
            printf("Number of students are : %d ",n);
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