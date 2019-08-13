#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define SUITS 4
#define FACES 13
#define AVAILABLE 0
#define TAKEN 1
#define SIZE 5
#define TRUE 1
#define FALSE 0

void dealACard(char *suits[], char *faces[], int deck[][FACES],int suitsInHand[], int facesInHand[]);
void dealAHand(char *suits[], char *faces[], int deck[][FACES], int suitsInHand[], int facesInHand[]);
void analyzeHand(char *suits[], char *faces[], int deck[][FACES], int suitsInHand[], int facesInHand[]);

typedef int bool;
bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

int main(){

        char *suits[4] = { "Clubs","Diamonds","Hearts", "Spades"};
        char *faces[13] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace" };
        int deck[4][13] = { AVAILABLE }; // using array to make sure the same card is drawn from a single deck
        int i;
        int suitsInHand[SUITS] = {0};
        int facesInHand[FACES] = {0};

        srand(time(NULL));

        for(i = 0; i < 10; i++) {
                dealAHand(suits, faces, deck, suitsInHand, facesInHand);
                analyzeHand(suits, faces, deck, suitsInHand, facesInHand);
        }

        system("pause");
}

void dealAHand(char *suits[], char *faces[], int deck[][FACES],int suitsInHand[], int facesInHand[]){
        int i;
        for(i = 0; i < 5; i++)
                dealACard(suits, faces, deck, suitsInHand, facesInHand);
        printf("\n");

}

void dealACard(char *suits[], char *faces[], int deck[][FACES], int suitsInHand[], int facesInHand[]){

        int suitrank, facerank;

        suitrank = rand() % 4;
        facerank = rand() % 13;

        while (deck[suitrank][facerank] == TAKEN){
                suitrank = rand() % 4;
                facerank = rand() % 13;
        }

        suitsInHand[suitrank]++;

        facesInHand[facerank]++;

        deck[suitrank][facerank];
        printf("%s of %s \n", faces[facerank], suits[suitrank]);

}

/*
analyzeHand: Determines whether the hand contains a
straight, a flush, four-of-a-kind,
and/or a three-of-a-kind; determines the
number of pairs; stores the results into
the external variables straight, flush,
four, three, and pairs.
*/

void analyzeHand(char *suits[], char *faces[], int deck[][FACES], int suitsInHand[], int facesInHand[]){

        int num_consec = 0;
        int rank, suit;

        straight = FALSE;
        flush = FALSE;
        four = FALSE;
        three = FALSE;
        pairs = 0;

        // check for flush � 5 cards of the same suit
        for (suit = 0; suit < SUITS; suit++)
                if (suitsInHand[suit] == 5)
                        flush = TRUE;

       // check for straight � eg. One each of 5,6,7,8,9
       // locate the first card
        rank = 0;
        while (facesInHand[rank] == 0)
                rank++;

        for (; rank < FACES && facesInHand[rank]; rank++)
                num_consec++;

        if (num_consec == 5) {
                straight = TRUE;
                return;
        }

        /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
        for (rank = 0; rank < FACES; rank++) {
                if (facesInHand[rank] == 4)
                        four = TRUE;
                if (facesInHand[rank] == 3)
                        three = TRUE;
                if (facesInHand[rank] == 2)
                        pairs++;
        }

        if (straight && flush)
                printf("Straight flush\n\n");
        else if (four)
                printf("Four of a kind\n\n");
        else if (three && pairs == 1)
                printf("Full house\n\n");
        else if (flush)
                printf("Flush\n\n");
        else if (straight)
                printf("Straight\n\n");
        else if (three)
                printf("Three of a kind\n\n");
        else if (pairs == 2)
                printf("Two pairs\n\n");
        else if (pairs == 1)
                printf("Pair\n\n");
        else
                printf("High card\n\n");

        printf("---------------------------\n");

}
