#include <stdio.h>
#include <stdlib.h>

int main()  //main function
{
int i=100;  //initialize array
int array[i];

int sum = 0;
for(i=0; i<100 ; i++){
array[i] = (int) (rand() % 100 + 1); //assign random variable
sum = sum + array[i]; //calculate sum or variables
}

printf("\nThe average is %d",sum/100); //output calculated average

return 0;
}
