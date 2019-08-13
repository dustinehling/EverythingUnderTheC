// COP 3223C-0003
// Project 1

// Included Libraries
#include <stdio.h>

// Main Function
int main() {

     // Variable declarations
    int yards_in_hat = 225;
    int yards_in_sweater = 450;
    int balls_of_yarn;
    int yards_in_ball;
    int yards_of_yarn;
    int number_of_hats;
    int number_of_sweaters;

    printf("How many balls of yarn available?\n");
    scanf("%d", &balls_of_yarn);

    printf("How many yards of yarn in each ball?\n");
    scanf("%d", &yards_in_ball);

    // Calculations
    yards_of_yarn = balls_of_yarn * yards_in_ball;
    number_of_hats = yards_of_yarn / yards_in_hat;
    number_of_sweaters = yards_of_yarn / yards_in_sweater;

    // Show results
    printf("You can make %d hats.\n",
                                number_of_hats);

    printf("You can make %d sweaters.\n",
                                number_of_sweaters);

    return 0;

}
