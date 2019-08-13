#include <stdio.h>
#include <stdlib.h>

int main() //main function
{
int i=100;  //initialize array
double array[i];

for(i=0; i < 100 ; i++){
array[i] = (double) (rand()%100+ 1)/2.0; //assign random values
}

for(i=0; i<100; i++){

printf("%.2f ",array[i]); //output

if((i+1)%10==0)
printf("\n");
}

return 0;
}
