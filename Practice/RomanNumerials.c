#include<stdio.h>

int main(){

   int input;
   printf("Enter a number less than or equal to 20 ~ ");        //Prompts for input then scans
   scanf("%d",&input);

   switch(input){
       case 1:
           printf("Roman equivalent~ I");              //Prints corresponding Roman numeral for inputed number
           break;
       case 2:
           printf("Roman equivalent~ II");
           break;
       case 3:
           printf("Roman equivalent~ III");
           break;
       case 4:
           printf("Roman equivalent~ IV");
           break;
       case 5:
           printf("Roman equivalent~ V");
           break;
       case 6:
           printf("Roman equivalent~ VI");
           break;
       case 7:
           printf("Roman equivalent~ VII");
           break;
       case 8:
           printf("Roman equivalent~ VIII");
           break;
       case 9:
           printf("Roman equivalent~ IX");
           break;
       case 10:
           printf("Roman equivalent~ X");
           break;
       case 11:
           printf("Roman equivalent~ XI");
           break;
       case 12:
           printf("Roman equivalent~ XII");
           break;
       case 13:
           printf("Roman equivalent~ XIII");
           break;
       case 14:
           printf("Roman equivalent~ XIV");
           break;
       case 15:
           printf("Roman equivalent~ XV");
           break;
       case 16:
           printf("Roman equivalent~ XVI");
           break;
       case 17:
           printf("Roman equivalent~ XVII");
           break;
       case 18:
           printf("Roman equivalent~ XVIII");
           break;
       case 19:
           printf("Roman equivalent~ XIX");
           break;
       case 20:
           printf("Roman equivalent~ XX");
           break;
       default:
            printf("Error Code -1 - Invalid Number\n");      //Stops program with an error of -1
            exit(-1);

   return 0;
   }
}
