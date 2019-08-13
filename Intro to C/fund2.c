// COP 3223
// Assignment 4

//Included Libraries
#include <stdio.h>


// Main Function
    int main () {

    int choice;
    int inv = 0;
    int don = 0;
    double transaction;
    double transaction_2;
    double balance;

    printf("WELCOME!\n");

    printf("What is the initial balance of the fund?\t");
    scanf("%lf", &balance);

    printf("1 - Make a donation?\n");
    printf("2 - Make an investment?\n");
    printf("3 - Print the balance of fund?\n");
    printf("4 - Quit.\n");
    scanf("%d", &choice);

    while (choice != 5)
        {

        if (choice == 1) {
            printf("Donation amount?\t");
            scanf("%lf", &transaction_2);
            balance += transaction_2;
            don++;
        }

         else if  (choice == 2) {
            printf("Investment amount?\t");
            scanf("%lf", &transaction);

            balance -= transaction;

            if (balance <= 15000) {
                printf("You cannot make an investment of that amount.\n");

                balance +=transaction;
            }
            else if (balance >= 15000) {

                inv++;
            }

            }

         else if  (choice == 3) {

            printf("The current balance of the fund is $%.2lf.\t", balance);
            printf("There have been %d donations and %d investments.\n", don,inv);
            }

         else if  (choice == 4) {
            printf("The final fund balance is $%.2lf.\t", balance);
            printf("There have been %d donations and %d investments.\n", don,inv);

            printf("THANK YOU!.\n");

            break;

            }

    printf("1 - Make a donation?\n");
    printf("2 - Make an investment?\n");
    printf("3 - Print the balance of fund?\n");
    printf("4 - Quit?\n");
    scanf("%d", &choice);
}

    return 0;
}
