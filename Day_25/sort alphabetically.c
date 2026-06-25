//SELECTION SORT TECHNIQUE
#include<stdio.h>
#include<string.h>
int main(){
    char names[50][100];
    int n;
    printf("Enter number of names :\n");
    scanf("%d",&n);
    getchar();
    printf("Enter names :\n");
    for(int i=0;i<n;i++){
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strlen(names[i])-1]='\0';
    }
    for(int i=0;i<n-1;i++){
       int min=i;
       char temp[100]={0};
       for(int j=i;j<n;j++){
        int a=strcmp(names[min],names[j]);
        if(a>0)  min=j;
       }
       strcpy(temp,names[i]);
       strcpy(names[i],names[min]);
       strcpy(names[min],temp);
    }
    printf("Sorted names 'ALPHABETICALLY' :\n");
    for(int i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}

//  BUBBLE SORT TECHNIQUE;
/*
#include<stdio.h>
#include<string.h>
int main(){
    char names[50][100];
    int n;
    printf("Enter number of names :\n");
    scanf("%d",&n);
    getchar();
    printf("Enter names :\n");
    for(int i=0;i<n;i++){
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strlen(names[i])-1]='\0';
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            int a=strcmp(names[j],names[j+1]);
            if(a>0){
                char temp[100]={0};
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("Sorted names 'ALPHABETICALLY' :\n");
    for(int i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}
*/