#include<stdio.h>
#include<unistd.h>
#include<math.h>

int main(){
    printf("**WELCOME**\n");
    int flag=0,choice;
    float n1,n2;

    while(flag!=1){
        sleep(1);
        printf("\n========== CALCULATOR ==========\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Power\n7. Square\n8. Square Root\n9. Cube\n10. Cube Root\n11. Factorial\n12. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("\nEnter first number : ");
            scanf("%f",&n1);
            printf("Enter second number : ");
            scanf("%f",&n2);
            printf("\nAddition : %.2f\n",n1+n2);
            break;

            case 2:
            printf("\nEnter first number : ");
            scanf("%f",&n1);
            printf("Enter second number : ");
            scanf("%f",&n2);
            printf("\nSubtraction : %.2f\n",n1-n2);
            break;

            case 3:
            printf("\nEnter first number : ");
            scanf("%f",&n1);
            printf("Enter second number : ");
            scanf("%f",&n2);
            printf("\nMultiplication : %.2f\n",n1*n2);
            break;

            case 4:
            printf("\nEnter first number : ");
            scanf("%f",&n1);
            printf("Enter second number : ");
            scanf("%f",&n2);

            if(n2==0)
            printf("\nDivision by zero is not possible.\n");
            else
            printf("\nDivision : %.2f\n",n1/n2);
            break;

            case 5:{
            int num1,num2;
            printf("\nEnter first number : ");
            scanf("%d",&num1);
            printf("Enter second number : ");
            scanf("%d",&num2);

            if(num2==0)
            printf("\nModulus by zero is not possible.\n");
            else
            printf("\nModulus : %d\n",num1%num2);
            break;
            }

            case 6:
            printf("\nEnter base : ");
            scanf("%f",&n1);
            printf("Enter exponent : ");
            scanf("%f",&n2);
            printf("\nPower : %.2f\n",pow(n1,n2));
            break;

            case 7:
            printf("\nEnter number : ");
            scanf("%f",&n1);
            printf("\nSquare : %.2f\n",pow(n1,2));
            break;

            case 8:
            printf("\nEnter number : ");
            scanf("%f",&n1);

            if(n1<0)
            printf("\nSquare root of negative number is not possible.\n");
            else
            printf("\nSquare Root : %.2f\n",sqrt(n1));
            break;

            case 9:
            printf("\nEnter number : ");
            scanf("%f",&n1);
            printf("\nCube : %.2f\n",pow(n1,3));
            break;

            case 10:
            printf("\nEnter number : ");
            scanf("%f",&n1);
            printf("\nCube Root : %.2f\n",cbrt(n1));
            break;

            case 11:{
            int check;
            long fact=1;

            printf("\nEnter number : ");
            scanf("%d",&check);

            if(check<0)
            printf("\nInvalid input.\n");
            else{
                for(int i=1;i<=check;i++)
                    fact*=i;
                printf("\nFactorial : %ld\n",fact);
            }
            break;
            }

            case 12:
            flag=1;
            break;

            default:
            printf("Enter valid choice.\n");
        }
    }

    printf("Thank you ! Have a nice day.\n");
    return 0;
}