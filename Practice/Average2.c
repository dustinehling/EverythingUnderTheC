#include <stdio.h>


int i, summit;
double average(int a[i], int x){ //initilize array/function

    for(i=0;i<x;i++){
    summit = summit + a[i];  //calculated a running total of the array
    }

    return((double)summit/x);
}

int main(){

    int i,num;
    int meme[10];

    printf("Please enter all numbers:\n"); //prompt for input

    for(i=0;i<7;i++){ //array of size 7 and scans input to fill array
    scanf("%d", &meme[i]);
    }
    printf("Average = %f\n", average(meme,7)); //outputs average

}
