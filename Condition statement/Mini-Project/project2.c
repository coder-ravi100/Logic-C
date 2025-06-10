/*ATM  Simulators using if else and switch case
(1.check pin 2.Balance withdraw)*/
#include<stdio.h>

int main()
{
    int pin, choice;
    int balance = 50000;
    int amount;
    int userPin = 123;

    while (1)
    {
        printf("\n\nEnter your PIN: ");
        scanf("%d", &pin);

        if (pin == userPin)
        {
            printf("\n==== ATM Menu ====");
            printf("\n1. Check Balance");
            printf("\n2. Withdraw Amount");
            printf("\n3. Update PIN");
            printf("\n4. Exit");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("\nYour Current Balance is: %d", balance);
                    break;

                case 2:
                    printf("\nEnter the amount to withdraw:");
                    scanf("%d", &amount);
                    if (amount > balance)
                    {
                        printf("\nInsufficient Balance.");
                    }
                    else
                    {
                        balance -= amount;
                        printf("\nWithdrawal Successful.");
                        printf("\nRemaining Balance: %d", balance);
                    }
                    break;

                case 3:
                    printf("\nEnter New PIN: ");
                    scanf("%d", &userPin);
                    printf("\nPIN Updated Successfully.");
                    break;

                case 4:
                    printf("\nThank you for using the ATM.");
                    return 0;

                default:
                    printf("\nInvalid Choice.");
            }
        }
        else
        {
            printf("\nInvalid PIN. Please try again.");
        }
    }

    return 0;
}
