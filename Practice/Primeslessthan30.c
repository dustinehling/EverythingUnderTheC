#include <stdio.h>
#include <stdlib.h>

int main()  //main function
{
int i=10;     //initialize array
int array[i];
array[0] = 2;
array[1] = 3;   //assign values
array[2] = 5;
array[3] = 7;
array[4] = 11;
array[5] = 13;
array[6] = 17;
array[7] = 19;
array[8] = 23;
array[9] = 29;

printf("Prime numbers less than 30 are:\n");   //output
for(i=0; i < 10; i++){
printf("\n %d",array[i]);
}

return 0;
}
