#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main(){
    printf("**WELCOME**\n");

    int flag=0,choice,f=0,k=0,i,j;
    char str1[1000],str2[1000],temp[1000],rev[1000];

    while(flag!=1){
        sleep(1);

        printf("\n========== STRING OPERATIONS SYSTEM ==========\n1. Input String\n2. Display String\n3. Find String Length\n4. Copy String\n5. Concatenate Strings\n6. Compare Strings\n7. Reverse String\n8. Convert to Uppercase\n9. Convert to Lowercase\n10. Count Vowels\n11. Count Consonants\n12. Count Words\n13. Check Palindrome\n14. Search Character\n15. Search Substring\n16. Remove Spaces\n17. Exit\n");
        printf("\nEnter your choice : ");
        scanf(" %d",&choice); getchar();
        switch(choice){
            case 1:
            printf("Enter string :\n"); 
            fgets(str1,sizeof(str1),stdin); str1[strlen(str1)-1]='\0';
            sleep(1);
            printf("\nString is inputed successfully.\n"); f=1;
            break;

            case 2:
            if(f!=1) printf("No string is stored.\n");
            else{
            printf("String :\n%s",str1);
            }
            break;

            case 3:
            if(f!=1) printf("No string is stored.\n");
            else{
            printf("String length : %d",strlen(str1));
            }
            break;

            case 4:
            if(f!=1) printf("No string is stored.\n");
            else{
            strcpy(str2,str1);
            printf("\nString is copied successfully.\n");
            printf("Copied String :\n%s",str2);
            }
            break;

            case 5:
            if(f!=1) printf("No string is stored.\n");
            else{
            printf("Enter second string : \n"); fgets(str2,sizeof(str2),stdin); str2[strlen(str2)-1]='\0';
            strcat(str1,str2);
            printf("\nString is concatenated successfully.\n");
            printf("Concatenated String :\n%s",str1);
            }
            break;

            case 6:
            if(f!=1){ printf("No string is stored.\n"); break;}
            printf("Enter string : \n"); fgets(str2,sizeof(str2),stdin); str2[strlen(str2)-1]='\0';
            if(strcmp(str1,str2)==0) printf("Strings are equal.\n");
            else printf("Strings are not equal.\n");
            break;

            case 7:
            if(f!=1){ printf("No string is stored.\n"); break;}
            for(int i=strlen(str1)-1;i>=0;i--) rev[strlen(str1)-1-i]=str1[i];
            rev[strlen(str1)]='\0';
            printf("Reverse of string :\n%s",rev);
            break;
            
            case 8:
            if(f!=1){ printf("No string is stored.\n"); break;}
            for(int i=0;i<strlen(str1);i++){
            if(str1[i]>=97 && str1[i]<=122) str1[i]-=32;
            }
            printf("Updated string : \n%s",str1);
            break;

            case 9:
            if(f!=1){ printf("No string is stored.\n"); break;}
            for(int i=0;i<strlen(str1);i++){
            if(str1[i]>=65 && str1[i]<=90) str1[i]+=32;
            }
            printf("Updated string : \n%s",str1);
            break;

            case 10:
            if(f!=1){ printf("No string is stored.\n"); break;}
            int countv=0;
            for(int i=0;str1[i]!='\0';i++){
            if(str1[i]=='a'|| str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
            countv++;
            }
            printf("Total number of vowels : %d\n",countv);
            break;

            case 11:
            if(f!=1){ printf("No string is stored.\n"); break;}
            int countc=0;
            for(int i=0;str1[i]!='\0';i++){
            if((str1[i]>=65 && str1[i]<=90) || (str1[i]>=97 && str1[i]<=122)){
            if(str1[i]=='a'|| str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
            continue;
            else countc++;
            }
            }
            printf("Total number of consonants : %d\n",countc);
            break;

            case 12:
            if(f!=1){ printf("No string is stored.\n"); break;}
            int count=0;
            for(int i=0;i<strlen(str1);i++){
            if(str1[i]=='\n' || str1[i]==' ' || str1[i+1]=='\0' || str1[i]=='.')
            count++;
            }
            printf("Number of words in the string are : %d",count);
            break;

            case 13:
            if(f!=1){ printf("No string is stored.\n"); break;}
            k=0;
            for(int i=0;i<strlen(str1)/2;i++){
            if(str1[i]!=str1[strlen(str1)-1-i]){
            k=-1;
            break;
            }
            }
            if(k==0) printf("Palindrome string.\n");
            else printf("Not a palindrome string.\n");
            break;

            case 14:
            if(f!=1){ printf("No string is stored.\n"); break;}
            k=0;
            char ch;
            printf("Enter character :\n"); scanf("%c",&ch); getchar();
            for(int i=0;i<strlen(str1);i++){
            if(str1[i]==ch){
            printf("Character found at position %d.\n",i+1);
            k=-1;
            }
            }
            if(k==0) printf("Character not found.\n");
            break;

            case 15:
            if(f!=1){ printf("No string is stored.\n"); break;}
            printf("Enter substring :\n"); fgets(str2,sizeof(str2),stdin); str2[strlen(str2)-1]='\0';
            k=0;
            int l=strlen(str2);
            if(l>strlen(str1)){ printf("\nSubstring is not present.\n"); break;}
            i=0,j=0;
            while(i <= strlen(str1)-1){
            for(j=0;j<l;j++){
                temp[j]=str1[i++];
            }
            i=i-l+1;
            temp[j]='\0';
            if(strcmp(temp,str2)==0){ printf("\nSubstring is present.\n"); k=1; break;}
            }
            if(k!=1) printf("\nSubstring is not present.\n");
            break;

            case 16:
            if(f!=1){ printf("No string is stored.\n"); break;}
            char rem[1000];
            j=0;
            
            for(i=0;i<strlen(str1);i++){
            if(str1[i]!=' '){
            rem[j]=str1[i];
            j++;
            }
            else continue;
            }
            rem[j]='\0';
            strcpy(str1,rem);
            sleep(1);
            printf("Spaces are removed successfully.\n");
            printf("Updated string :\n%s",str1);
            break;

            case 17:
            flag=1;
            break;

            default:
            printf("Enter valid choice.\n");
        }


    }

    printf("Thank you! Have a nice day.\n");
    return 0;
}