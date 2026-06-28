#include<stdio.h>
#include<unistd.h>

int main(){
    char choice;
    int points=0;
    printf("Let's start the quiz!!\n");
        printf("Which of the objects is often used to hang clothes?\n");
        sleep(2);
        printf("A.Watering can\nB.Screwdriver\nC.Hanger\nD.Wrench\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='c'|| choice=='C') {
        printf("Correct answer,well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("Which of these is not usually used in spice mix of garam masala?\n");
         sleep(2);
        printf("A.Cardamom\nB.Cinnamon\nC.Clove\nD.Raisin\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='d'|| choice=='D') {
        printf("Correct answer,well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("How many planets in the solar system lie between the Earth and the Sun?\n");
         sleep(2);
        printf("A.2\nB.1\nC.4\nD.3\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='a'|| choice=='A') {
        printf("Correct answer,well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("In Indian history,the Nandas,the Shugas,and the Pandyas are all most famously names of what?\n");
         sleep(2);
        printf("A.Battles\nB.Ruling dynasties\nC.Epic poems\nD.Forts\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='b'|| choice=='B') {
        printf("Correct answer,well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("Which state is represented by the code 'MH' in number plates of Indian vehicles?\n");
         sleep(2);
        printf("A.Meghalaya\nB.Delhi\nC.Maharashtra\nD.Dholakpur\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='c'|| choice=='C') {
        printf("Correct answer,well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("According to the Ramayana, what was the name of Lakshmana and Shatrughna's mother?\n");
         sleep(2);
        printf("A.Kaikeyi\nB.Kausalya\nC.Sumitra\nD.Urmila\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='c'|| choice=='C') {
        printf("Correct answer, well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("The movie Gold,starring Akshay Kumar,is primarily set during which edition of the Olympic games?\n");
         sleep(2);
        printf("A.1948 London\nB.1952 Helsinki\nC.1980 Moscow\nD.1976 Montreal\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='a'|| choice=='A') {
        printf("Correct answer, well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("In which stadium did Virender Sehwag score his only ODI double century?\n");
         sleep(2);
        printf("A.Barabati stadium,cuttack\nB.Eden gardens,kolkata\nC.Holkar stadium,indore\nD.Brabourne stadium,mumbai\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='c'|| choice=='C') {
        printf("Correct answer, well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("Which of these districts in Uttar Pradesh was formerly called Jyotiba Phule Nagar?\n");
         sleep(2);
        printf("A.Khusinagar\nB.Amroha\nC.Sitapur\nD.Balrampur\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='b'|| choice=='B') {
        printf("Correct answer, well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("Leena Gade,a person of Indian origin, is the first female race engineer to win which of the following races?\n");
         sleep(2);
        printf("A.Indianapolis 500\nB.24 Hours of Le Mans\nC.12 Hours of Sebring\nD.Monaco Grand Prix\n");
        sleep(1);
        printf("Choose your option :(A,B,C,D) ");
        scanf(" %c",&choice);
        if(choice=='b'|| choice=='B') {
        printf("Correct answer, well played\n");
        points++;
        }
        else {
        sleep(2);
        printf("Incorrect answer. Better luck next time!\nTotal points : %d",points*100); 
        return 0;
        }
        printf("Congratulations, you have completed the quiz!!\nTotal points gained : 1000\nTHANK YOU !!");

    return 0;
}