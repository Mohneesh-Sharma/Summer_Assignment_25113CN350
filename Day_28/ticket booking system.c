#include<stdio.h>
#include<unistd.h>
#include<string.h>

struct ticket{
    char from[100];
    char to[100];
    char time[100];
    char train[100];
    float price;
    int qty;
};

struct info{
    char name[100];
    int id;
    struct ticket t;
}i[5000];

int main(){
    printf("**WELCOME**\n");
    int flag=0,choice,check,n=0,f=0;
    while(flag!=1){
        sleep(1);
        printf("\n========== RAILWAY TICKET BOOKING SYSTEM ==========\n1. Book Ticket\n2. Display All Bookings\n3. Search Booking\n4. Update Booking\n5. Cancel Ticket\n6. Check Ticket Price\n7. Count Total Bookings\n8. Display Total Bookings Amount\n9. Exit\n");
        printf("\nEnter your choice : \n");
        scanf("%d", &choice); getchar();
        switch(choice){
            case 1:
            printf("\n========== BOOK TICKET ==========\n");

            if(n==5000){
                printf("Booking limit reached.\n");
                break;
            }
            printf("Enter Passenger ID : "); scanf(" %d",&i[n].id); getchar();
            printf("Enter Passenger Name : "); fgets(i[n].name,sizeof(i[n].name),stdin); i[n].name[strlen(i[n].name)-1]='\0';
            printf("Enter Source Station : "); fgets(i[n].t.from,sizeof(i[n].t.from),stdin); i[n].t.from[strlen(i[n].t.from)-1]='\0';
            printf("Enter Destination Station : "); fgets(i[n].t.to,sizeof(i[n].t.to),stdin); i[n].t.to[strlen(i[n].t.to)-1]='\0';
            printf("Enter Train Name : "); fgets(i[n].t.train,sizeof(i[n].t.train),stdin); i[n].t.train[strlen(i[n].t.train)-1]='\0';
            printf("Enter Departure Time : "); fgets(i[n].t.time,sizeof(i[n].t.time),stdin); i[n].t.time[strlen(i[n].t.time)-1]='\0';
            printf("Enter Number of Tickets : "); scanf("%d",&i[n].t.qty);
            printf("Enter Ticket Price : "); scanf("%f",&i[n].t.price);
            sleep(1);
            printf("\nBooking Successful .\n");
            n++;
            break;

            case 2:
            if(n==0) printf("\n==========NO BOOKINGS ==========\n");
            else{
            printf("\n========== ALL BOOKINGS ==========\n");
            for(int k=0;k<n;k++){
                printf("Passenger ID : %d\n",i[k].id);
                printf("Passenger Name : %s\n",i[k].name);
                printf("Source Station : %s\n",i[k].t.from);
                printf("Destination Station : %s\n",i[k].t.to);
                printf("Train Name : %s\n",i[k].t.train);
                printf("Departure Time : %s\n",i[k].t.time);
                printf("Number of Tickets : %d\n",i[k].t.qty);
                printf("Ticket Price : %.2f\n",i[k].t.price);
                printf("\n-----------------------------\n");
            }
            }
            break;
            case 3:
            f=0;
            printf("\n==========SEARCH BOOKINGS ==========\n");

            printf("Enter Passenger ID : "); scanf(" %d",&check);
            for(int k=0;k<n;k++){
                if(check==i[k].id){
                f=1;
                printf("Passenger ID : %d\n",i[k].id);
                printf("Passenger Name : %s\n",i[k].name);
                printf("Source Station : %s\n",i[k].t.from);
                printf("Destination Station : %s\n",i[k].t.to);
                printf("Train Name : %s\n",i[k].t.train);
                printf("Departure Time : %s\n",i[k].t.time);
                printf("Number of Tickets : %d\n",i[k].t.qty);
                printf("Ticket Price : %.2f\n",i[k].t.price); 
                                   
                }
            }
            if(f==0) printf("\n==========NO BOOKINGS FOUND==========\n");
            break;
            case 4:
            f=0;
            printf("\n==========UPDATE TICKET==========\n");
            printf("Enter Passenger ID : "); scanf(" %d",&check); getchar();
            for(int k=0;k<n;k++){
                if(check==i[k].id){
                char verify[100];
                f=1;
            printf("Enter Departure Time : "); fgets(verify,100,stdin); verify[strlen(verify)-1]='\0';
            if(strcmp(verify,i[k].t.time)==0){        
            printf("Enter Passenger ID : "); scanf(" %d",&i[k].id); getchar();
            printf("Enter Passenger Name : "); fgets(i[k].name,sizeof(i[k].name),stdin); i[k].name[strlen(i[k].name)-1]='\0';
            printf("Enter Source Station : "); fgets(i[k].t.from,sizeof(i[k].t.from),stdin); i[k].t.from[strlen(i[k].t.from)-1]='\0';
            printf("Enter Destination Station : "); fgets(i[k].t.to,sizeof(i[k].t.to),stdin); i[k].t.to[strlen(i[k].t.to)-1]='\0';
            printf("Enter Train Name : "); fgets(i[k].t.train,sizeof(i[k].t.train),stdin); i[k].t.train[strlen(i[k].t.train)-1]='\0';
            printf("Enter Departure Time : "); fgets(i[k].t.time,sizeof(i[k].t.time),stdin); i[k].t.time[strlen(i[k].t.time)-1]='\0';
            printf("Enter Number of Tickets : "); scanf("%d",&i[k].t.qty);
            printf("Enter Ticket Price : "); scanf("%f",&i[k].t.price);
            sleep(1);
            printf("\nTicket Updated Successfully .\n");
            break;                                   
            }

            }
            }
            if(f==0) printf("\n==========NO BOOKINGS FOUND==========\n");
            break;
            case 5:
            f=0;
            printf("\n==========DELETE BOOKING==========\n");
            printf("Enter Passenger ID : "); scanf(" %d",&check); getchar();
            for(int k=0;k<n;k++){
                if(check==i[k].id){
                char verify[100];
                f=1;
            printf("Enter Departure Time : "); fgets(verify,100,stdin); verify[strlen(verify)-1]='\0';
            if(strcmp(verify,i[k].t.time)==0){        
            for(int q=k;q<n-1;q++) i[q]=i[q+1];
            n--;
            sleep(1);
            printf("\nBooking Deleted Successfully .\n");
            break;                                   
            }

            }
            }
            if(f==0) printf("\n==========NO BOOKINGS FOUND==========\n");
            break;         
            case 6:
            f=0;
            printf("\n==========TICKET PRICE CHECKING==========\n");
            printf("Enter Passenger ID : "); scanf(" %d",&check); getchar();
            for(int k=0;k<n;k++){
                if(check==i[k].id){
                f=1;
                printf("\nTrain Name : %s\n",i[k].t.train);
                printf("Number of Tickets : %d\n",i[k].t.qty);
                printf("Ticket Price : %.2f\n",i[k].t.price);                
            }
            }
            
            if(f==0) printf("\n==========NO BOOKINGS FOUND==========\n");
            break; 
            case 7:
            printf("\n==========TOTAL BOOKINGS==========\n");  
            if(n==0) printf("\nNO BOOKINGS ARE DONE\n");
            else printf("\nTotal Bookings Done : %d\n",n);
            break;
            case 8:
            printf("\n==========TOTAL BOOKINGS AMOUNT==========\n"); 

            float price;
            price=0;
            for(int k=0;k<n;k++) price+=(i[k].t.qty * i[k].t.price);
            printf("Total Bookings Amount : %.3f\n",price);
            break;
            case 9:
            flag=1;
            break;

            default :
            printf("Enter valid choice.\n");
        }
    
    }
    printf("Thank you ! Have a nice day.\n");
    return 0;
}