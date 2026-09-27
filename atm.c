#include<stdio.h>
int main()
{
    int pin=4567;
    int pinenter;
    int attempts=0;
    int choice;
    float balance=100000;
    float amount;
    printf("===========================");
    printf("\n           ATM             ");
    printf("\n===========================");
    while(attempts<3)
    {
        printf("\nPlease enter your pin:");
        scanf("%d",&pinenter);
        if (pinenter==pin)
        {
            printf("the pin is correct");
            break;
        }
        else {
            attempts++;
        printf("the pin is wrong \n attempts left:%d",3-attempts);
        
        }
    }
    if(attempts==3)
    {
    printf("\ntoo many incorrect attempts\nyour card has been blocked");
    return 0;
    }
    choice=0;
    while (choice!=4)
    {
        printf("\n================================");
        printf("\n            ATM Menu            ");
        printf("\n================================");
        printf("\n1.Check balance");
        printf("\n2.withdraw amount .");
        printf("\n3.deposit amount");
        printf("\n4.Exit");
        printf("\n================================");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        if(choice==1)
        {
        printf("the avalable balance is: %.2f\n",balance);
        }
        else if (choice==2)
        {
            printf("enter the amount you want to withdraw:");
            scanf("%f",&amount);
            if (amount<=0)
            {
                printf("invalide amount withdraw");
            }
            else if (amount>balance)
            {
                printf("transation failed, insuffiant balance");
            }
            else if (amount>20000)
            {
                printf("maximum withdraw amount is 20000");
            }
            else
            {
                balance=balance-amount;
                printf("transation successfull \nbalance remaining:%f",balance);
            }
        }
        else if (choice==3)
        {
            printf("enter the amount you want to deposit:");
            scanf("%f",&amount);
            if (amount<=0)
            {
                printf("invalide amount");
            }
            else if (amount>50000)
            {
                printf("maximum amount you can deposit is 50,000");
            }
            else
            {
                balance=balance+amount;
                printf("transation done successfully\nbalance:%.2f",balance);
            }
            
        }
        else if (choice==4)
        {
            printf("Thank you for banking with us\n please collect your card");
        }
        else
        {
            printf("error");
        }
    }
    return 0;
}