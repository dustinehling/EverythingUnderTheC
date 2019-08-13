// COP 3223C
// Assignment 3

// Included Libraries
#include <stdio.h>
#include <math.h>

// Main Function
int main () {

    double Fund;
    double Leftover_1K;
    double Leftover_500;
    double Interest;
    double Rate;
    int OneK_Scholly;
    int Five_Scholly;
    int TwoFive_Scholly;

    // Input Specifications
    printf("How much money was in the Scholarship Endowment Fund last year?\n");
    scanf("%lf", &Fund);

    printf("What is the yearly percent rate of the fund?\n");
    scanf("%lf", &Rate);

    // Calculation
    Interest = Fund * (Rate/100);

    printf("%d is available for scholarships.\n", Interest);

    // Parameters
{   OneK_Scholly = Interest / 1000;
    if (OneK_Scholly < 5) {
    }

    else {
        (OneK_Scholly = 5);
        printf("5 $1000 dollar scholarships will be awarded.\n");
    }
}
    Leftover_1K = Interest - (OneK_Scholly * 1000);

{   Five_Scholly = Leftover_1K / 500.0;
    if (Five_Scholly < 10) {
    printf("%d $500 scholarships will be awarded.\n", Five_Scholly);
    }

    else {
        (Five_Scholly = 10);
            printf("10 $500 scholarships will be awarded.\n");
    }
}

    Leftover_500 = Leftover_1K -(Five_Scholly*500);

    TwoFive_Scholly = Leftover_500 / 250;
    printf("%d $250 scholarships will be awarded.\n", TwoFive_Scholly);

    return 0;

}
