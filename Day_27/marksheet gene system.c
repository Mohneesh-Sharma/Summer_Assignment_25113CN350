#include<stdio.h>
#include<unistd.h>
#include<string.h>
void grade(int n){
    if(n>=90)  printf("A+");
    else if(n>=80 && n<90) printf("A");
    else if(n>=70 && n<80) printf( "B+");
    else if(n>=60 && n<70) printf( "B");
    else if(n>=50 && n<60) printf( "C+");
    else if(n>=40 && n<50) printf( "C");
    else  printf("D");
}
int main(){
    printf("**WELCOME**\n");
    char name[100],fname[100],mname[100],sname[100];
    int class,rollnum,age;
    int eng,maths,hindi,sst,cmp,music;
    float avg;
    printf("Enter student's name : ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0'; 
    printf("Enter father's name : ");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1]='\0';
    printf("Enter mother's name : ");
    fgets(mname,sizeof(mname),stdin);
    mname[strlen(mname)-1]='\0';
    printf("Enter school name : ");
    fgets(sname,sizeof(sname),stdin);
    sname[strlen(sname)-1]='\0';
    printf("Enter class : "); scanf(" %d",&class);
    printf("Enter age : "); scanf(" %d",&age);
    printf("Enter Roll number : "); scanf(" %d",&rollnum);
    printf("Enter English marks : "); scanf(" %d",&eng);
    printf("Enter Maths marks : "); scanf(" %d",&maths);
    printf("Enter Social Studies marks : "); scanf(" %d",&sst);
    printf("Enter Hindi marks : "); scanf(" %d",&hindi);
    printf("Enter Computer marks : "); scanf(" %d",&cmp);
    printf("Enter Music marks : "); scanf(" %d",&music);
    int sum=eng + maths + hindi + sst + cmp + music;
    avg=sum/6.0;
printf("\n=====================================================\n");
printf("                STUDENT MARKSHEET\n");
printf("=====================================================\n");

printf("Student Name   : %s\n", name);
printf("Father's Name  : %s\n", fname);
printf("Mother's Name  : %s\n", mname);
printf("School Name    : %s\n", sname);
printf("Class          : %d\n", class);
printf("Roll Number    : %d\n", rollnum);
printf("Age            : %d Years\n", age);

printf("-----------------------------------------------------\n");
printf("Subject\t\tMarks\t\tGrade\n");
printf("-----------------------------------------------------\n");

printf("English\t\t%d\t\t", eng); grade(eng);
printf("\nMathematics\t%d\t\t", maths); grade(maths);
printf("\nHindi\t\t%d\t\t", hindi); grade(hindi);
printf("\nSST\t\t%d\t\t", sst); grade(sst);
printf("\nComputer\t%d\t\t", cmp); grade(cmp);
printf("\nMusic\t\t%d\t\t", music); grade(music);

printf("\n-----------------------------------------------------\n");
printf("Total Marks    : %d / 600\n", sum);
printf("Average Marks  : %.2f\n", avg);
printf("Average Grade  : "); grade((int)avg);
printf("\nStatus         :"); if(eng>=33 && hindi>=33 && maths>=33 && sst>=33 && cmp>=33 && music>=33) printf(" PASS\n"); else printf(" FAIL\n");
printf("=====================================================\n");

    return 0;
}