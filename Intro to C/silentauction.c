//Assignment 5
//COP 3223-003

//Included Libraries
# include <stdio.h>
# include <stdlib.h>
# include <time.h>


//Main  Function
int main () {

//File input
    FILE * ifp;
    ifp = fopen("input.txt", "r");

//Variable Declarations and read in # of Auctions to be tested
    int num_auctions;

        fscanf(ifp , "%d" , &num_auctions);

    int num_bidders;
    int current_bid;
    int max_bid;
    int i;
    int x;
    int sum=0;

//Read in the rest of the donation amounts for testing
    for (i=0; i<num_auctions; i++) {

        fscanf(ifp, "%d" , &num_bidders);
        fscanf(ifp, "%d", &max_bid);



    for (x=1; x<num_bidders; x++) {

        fscanf(ifp, "%d", &current_bid);

        if (current_bid>max_bid)
            max_bid = current_bid;

    }

//Output highest donations
    printf("Auction %d sold for $%d.\n", i+1, max_bid);

//Sum highest donation w/output
        sum += max_bid;


    }

    printf("The silent auction raised a total of $%d for charity!\n", sum);

    return 0;

}
