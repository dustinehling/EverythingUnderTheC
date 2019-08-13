#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counts[6] = {0};  //initialize arrays/variables
    int dice;
    int sum=0;
    int i;


    for(i=0; i<1000; i++){ //simulates 1000 rolls
    dice = rand() % 6 + 1;
    counts[dice - 1]++;
    }

    for(i=0; i<6; i++)  //counts times each number 1 thru 6 was rolled
    printf("The value [%d] was rolled %d times.\n", i+1,counts[i]); //outputs number of rolls

    return 0;
}
