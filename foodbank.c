//COP 3223-003
//Assignment 6

#include <stdio.h>

//Main function
int main() {
    int choice;
    int i;
    int number;
    int type;
    int inventory[5] = {0};
    int donations[5] = {0};
    int request[5] = {0};
    char TYPES[5][20] = {"Protein", "Dairy", "Grain", "Vegetable", "Fruit"};

    printf("Welcome to the Food Bank Inventory Program!\n");

    //Prompt user for primary input
    printf("What would you like to do?\n");
    printf("\t1. Enter a Donation\n");
    printf("\t2. Enter a Request\n");
    printf("\t3. Fulfill Request\n");
    printf("\t4. Print status report\n");
    printf("\t5. Exit\n");
    scanf("%d", &choice);
    printf("\n");

    //Print if choice is greater than 5 or less than 1
    if(choice > 5 || choice < 1)
        printf("Sorry, that was not a valid input.\n\n");

    while (choice != 5) {
        switch (choice) {

            //Donation type & amount
            case 1:

                printf("\nWhat would you like to donate?\n");
                number = 0;
                for(i=0; i<5; i++){
                    printf("\t%d. %s\n",number, TYPES[i]);
                    number += 1;
                }

                scanf("%d", &type);
                printf("How many would you like to donate?\n");
                scanf("%d", &donations[type]);
                printf("Donation Successfully Added!\n\n");
                break;

            //Request type & amount
            case 2:

                printf("\nWhat would you like to request?\n");
                number = 0;
                for(i=0; i<5; i++){
                    printf("\t%d. %s\n",number, TYPES[i]);
                    number += 1;
                }

                scanf("%d", &type);
                printf("How many would you like to request?\n");
                scanf("%d", &request[type]);
                printf("Request Successfully Added!\n\n");
                break;

            //Check if requests can be met with current inventory amounts
            case 3:

                for(i=0; i<5; i++){
                    if (request[i] > donations[i] && donations[i] == 0)
                        printf("%s requests cannot be fulfilled at this time.\n", TYPES[i]);
                    else if (request[i] > donations[i]){
                        printf("%s requests can only be partially fulfilled.\n", TYPES[i]);
                        inventory[i] = donations[i];
                        donations[i] -= donations[i];
                        request[i] -= inventory[i];
                    }
                    else {
                        donations[i] -= request[i];
                        request[i] -= request[i];
                    }
                }
                printf("\n");
                break;

            //Output current inventory into tab;e format specified in rubric
            case 4:

                for(i=0; i<5; i++){
                    printf("\t%-10s:    Donations: %-2d    Requests: %-2d\n", TYPES[i], donations[i], request[i]);
                }
                printf("\n");
                break;
        }
        //Reprint the initial menu prompt
        printf("What would you like to do?\n");
        printf("\t1. Enter a Donation\n");
        printf("\t2. Enter a Request\n");
        printf("\t3. Fulfill Request\n");
        printf("\t4. Print status report\n");
        printf("\t5. Exit\n");
        scanf("%d", &choice);
        printf("\n");


        //Make sure an available option is selected
        if(choice > 5 || choice < 1)
            printf("I'm sorry, that was an invalid input.\n\n");
    }

    printf("Thank you for using our inventory software!\n");

    return 0;
}
