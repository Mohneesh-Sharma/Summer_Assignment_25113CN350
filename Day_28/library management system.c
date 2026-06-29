#include<stdio.h>
#include<unistd.h>
#include<string.h>

struct library {
    char book_name[100];
    char author[100];
    int qty;
    int book_ID;
    char category[50];
    float charge;
}l[5000];
struct student{
    char name[100];
    char isbook[100];
    int isbook_ID;
    char isdate[20];
    char duedate[20];
    char redate[20];
    float fine;
} s[1000];

int main(){
    printf("**WELCOME**\n");
    int flag=0,choice,n=0,j=0;
    while(flag!=1){
        sleep(1);
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n1. Add Book\n2. Display All Books\n3. Search Book\n4. Update Book\n5. Delete Book\n6. Issue Book\n7. Return Book\n8. Count Book Records\n9. Count Books\n10. Display Issued Books\n11. Exit\n");
        printf("Enter your choice : ");     
        scanf(" %d",&choice);
        getchar();
        switch(choice){
            case 1:
            int duplicateid=0,check;
            if(n==5000){
                printf("The Space Is Full !\n");
                break;
            }
            printf("Enter Book ID : "); scanf(" %d",&check); getchar();
            for(int i=0;i<n;i++){
                if(check==l[i].book_ID){duplicateid=1; break;}
            }
            if(duplicateid==1){printf("Book ID already exists!\n"); break;}
            else{
            l[n].book_ID=check;
            printf("Enter Book Name : "); fgets(l[n].book_name,100,stdin); l[n].book_name[strlen(l[n].book_name)-1]='\0';
            printf("Enter Author Name : "); fgets(l[n].author,100,stdin); l[n].author[strlen(l[n].author)-1]='\0';
            printf("Enter Book's Category : "); fgets(l[n].category,50,stdin); l[n].category[strlen(l[n].category)-1]='\0';
            printf("Enter Quantity : "); scanf(" %d",&l[n].qty);
            printf("Enter Book's charge per day : "); scanf(" %f",&l[n].charge);
            n++;
            break;
            }
            case 2:
            if(n==0){
                printf("No Book Present !\n");
                break;
            }
            printf("**Available books**\n");
            for(int i=0;i<n;i++){
            printf("\nBook ID        : %d\n", l[i].book_ID);
            printf("Book Name      : %s\n", l[i].book_name);
            printf("Author         : %s\n", l[i].author);
            printf("Category       : %s\n", l[i].category);
            printf("charge         : Rs. %.2f\n", l[i].charge);
            printf("Quantity       : %d\n", l[i].qty);
            }
            break;
            case 3:
            int inp,f=0;
            printf("Enter Book ID : "); scanf(" %d",&inp);
            for(int i=0;i<n;i++){
                if(l[i].book_ID==inp){
                    printf("\nBook ID        : %d\n",l[i].book_ID);
                    printf("Book Name      : %s\n", l[i].book_name);
                    printf("Author         : %s\n", l[i].author);
                    printf("Category       : %s\n", l[i].category);
                    printf("charge          : Rs. %.2f\n", l[i].charge);
                    printf("Quantity       : %d\n", l[i].qty);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("Book not found!\n");
            break;
            case 4:
            f=0;
            int already=0;
            printf("Enter book's ID for updation : "); scanf(" %d",&inp);  getchar();
            for(int i=0;i<n;i++){
                if(l[i].book_ID==inp){
                    f=1;
                    printf("Enter updated book's details :\n");
                    printf("Enter Book ID : "); scanf(" %d",&check); getchar();
                    for(int z=0;z<n;z++){
                        if(l[z].book_ID==check && z!=i){
                            already=1;
                        }
                    }
                    if(already==1){printf("Book ID already exists!\n"); break;}
                    else l[i].book_ID=check;
                    printf("Enter Book Name : "); fgets(l[i].book_name,100,stdin); l[i].book_name[strlen(l[i].book_name)-1]='\0';
                    printf("Enter Author Name : "); fgets(l[i].author,100,stdin); l[i].author[strlen(l[i].author)-1]='\0';
                    printf("Enter Book's Category : "); fgets(l[i].category,50,stdin); l[i].category[strlen(l[i].category)-1]='\0';          
                    printf("Enter Quantity : "); scanf(" %d",&l[i].qty);
                    printf("Enter Book's charge : "); scanf(" %f",&l[i].charge);
                    break;
                }
            }
            if(f==0) printf("book not found!\n");
            break;
            case 5:
            f=0;
            printf("Enter book's ID for deletion : "); scanf(" %d",&inp);
            for(int i=0;i<n;i++){
                if(inp==l[i].book_ID){
                    f=1;
                    for(int q=i;q<n-1;q++){
                        l[q]=l[q+1];
                    }
                    n--;
                    printf("Book is deleted .\n");
                    break;
                }
            }
            if(f==0) printf("Book not found!\n");
            break;
            case 6:
            if(j==1000){
            printf("Issue record is full!\n");
             break;
             }
            f=0;
            int k;
            printf("Enter book's ID : "); scanf(" %d",&inp); getchar();
            for(int i=0;i<n;i++){
                if(inp==l[i].book_ID && l[i].qty!=0){ 
                    f=1; k=i; l[i].qty--; break; }
            }
            if(f==0) printf("Book not available .\n");
            else{
            printf("Enter student's name : "); fgets(s[j].name,100,stdin); s[j].name[strlen(s[j].name)-1]='\0';
            printf("Enter isuue date (DD-MM-YYYY) : "); fgets(s[j].isdate,20,stdin); s[j].isdate[strlen(s[j].isdate)-1]='\0';
            printf("Enter due date (DD-MM-YYYY) : "); fgets(s[j].duedate,20,stdin); s[j].duedate[strlen(s[j].duedate)-1]='\0';
            strcpy(s[j].isbook,l[k].book_name);
            s[j].isbook_ID=l[k].book_ID;
            s[j].redate[0] = '\0';
            s[j].fine = 0;
            j++;
            printf("Book is issued successfully.\n");
            }
            break;
            case 7:
            f=0;
            already=0;
            float finecharge;
            int days;
            printf("Enter book's ID : "); scanf(" %d",&inp); getchar();
            for(int i=0;i<j;i++){
                if(inp==s[i].isbook_ID){
                     f=1; k=i; 
                     if(strlen(s[i].redate)!=0) already=1;
                     break; }
            }
            if(f==0) printf("Book was not issued .\n");
            else if(already ==1) printf("Book already returned .\n");
            else{
            printf("Enter return date (DD-MM-YYYY) : "); fgets(s[k].redate,20,stdin); s[k].redate[strlen(s[k].redate)-1]='\0';
            printf("Returned after due date (days) : "); scanf(" %d",&days);
            for(int i=0;i<n;i++){
                if(l[i].book_ID==inp){
                     finecharge=l[i].charge;
                     l[i].qty++;
                     break; }
            }
            s[k].fine=days*finecharge;
            printf("Fine : %.2f\n",s[k].fine);
            printf("Book is returned successfully.\n");
            }
            break;
            case 8:
            printf("Number of books records : %d\n",n);
            break;
            case 9:
            int num=0;
            for(int i=0;i<n;i++) num+=l[i].qty;
            printf("Number of books present : %d\n",num);
            break;
            case 10:
            if(j==0) printf("No book is issued.\n");
            else{
                printf("***Issued books***\n");
                for(int i=0;i<j;i++){
             printf("\nBook ID        : %d\n", s[i].isbook_ID);
             printf("Book Name      : %s\n", s[i].isbook);
             printf("Student Name         : %s\n", s[i].name);
             printf("Issue Date       : %s\n", s[i].isdate);
             printf("Due Date       : %s\n", s[i].duedate);
            if(strlen(s[i].redate)==0)
            printf("Return Date    : Not Returned\n");
            else
            printf("Return Date    : %s\n", s[i].redate);
             printf("Fine          : Rs. %.2f\n", s[i].fine);
            }
            }
            break;
            case 11:
            flag=1;
            break;
            default:
            printf("Enter valid choice.\n");
        }
    }
    printf("Thank you ! Have a nice day.\n");
    return 0;
}