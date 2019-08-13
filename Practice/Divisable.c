#include<stdio.h>
#include<stdlib.h>

int main(){
   int num;
   srand(time(NULL));    //Seeds the random number generator, getting 7000+ on every trial run
   num = rand();         //Calls for a unique random number

   printf("Number is: %d\n",num);   //Prints random output

   if(num%2==0)
       printf("Number is Even\n");
   else
       printf("Number is Odd\n");

   if(num%3==0)
       printf("Number is divisible by 3\n");        //Calculations as specified by word.doc
   else
       printf("Number is not divisible by 3\n");

   if(num%10==0)
       printf("Number is divisible by 10\n");
   else
       printf("Number is not divisible by 10\n");

   return 0;
}
