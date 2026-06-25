//selection sort technique
#include<stdio.h>
#include<string.h>
int main(){
    char words[50][100];
    int n;
    printf("Enter number of words :\n");
    scanf("%d",&n);
    getchar();
    printf("Enter words :\n");
    for(int i=0;i<n;i++){
        fgets(words[i],sizeof(words[i]),stdin);
        words[i][strlen(words[i])-1]='\0';
    }
    for(int i=0;i<n-1;i++){
        int lmin=i;
        for(int j=i;j<n;j++){
            if(strlen(words[lmin])>strlen(words[j])) lmin=j;
        }
        char temp[100]={0};
        strcpy(temp,words[lmin]);
        strcpy(words[lmin],words[i]);
        strcpy(words[i],temp);
    }
    printf("Sorted words by length :\n");
    for(int i=0;i<n;i++){
        printf("%s\n",words[i]);
    }
    return 0;
}

//bubble sort technique
/*
#include<stdio.h>
#include<string.h>
int main(){
    char words[50][100];
    int n;
    printf("Enter number of words :\n");
    scanf("%d",&n);
    getchar();
    printf("Enter words :\n");
    for(int i=0;i<n;i++){
        fgets(words[i],sizeof(words[i]),stdin);
        words[i][strlen(words[i])-1]='\0';
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strlen(words[j])>strlen(words[j+1])){
                char temp[100]={0};
                strcpy(temp,words[j+1]);
                strcpy(words[j+1],words[j]);
                strcpy(words[j],temp);
            }
        }
        
    }
    printf("Sorted words by length :\n");
    for(int i=0;i<n;i++){
        printf("%s\n",words[i]);
    }
    return 0;
}
*/
