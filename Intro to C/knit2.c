// COP 3223C-0003
// Project 2


//Included Libraries
#include <stdio.h>
#include <math.h>


//Main Function
int main() {

    //Variable Declarations

    #define squares_in_blanket 60;
    double people_knitting_beginning;
    double new_knitters_daily;
    float growth;
    int blankets_made_weekly;
    int squares_made_weekly;
    int squares_leftover;

    //Input Specifications

    printf("How many people are knitting blanket squares at the beginning of the week?\n");
    scanf("%lf", &people_knitting_beginning);

    printf("How many new people are knitting blanket squares each day?\n");
    scanf("%lf", &new_knitters_daily);


    //Calculations

    growth = (1+ new_knitters_daily);

    squares_made_weekly = people_knitting_beginning * pow(growth,7);

    blankets_made_weekly = squares_made_weekly / squares_in_blanket;

    squares_leftover = squares_made_weekly % squares_in_blanket;


    //Output Specifications

    printf("%d blanket squares will be made this week.\n",
                                                        squares_made_weekly);


    printf("You will be able to make %d blankets and start next week with %d squares\n",
                                                                                    blankets_made_weekly, squares_leftover);


    return 0;

}
