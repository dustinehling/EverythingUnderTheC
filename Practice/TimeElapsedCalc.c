#include<stdio.h>
#include<time.h>

int main () {

    long int now,yrs,mon,wks,days,hrs;

    now = time(NULL);   //Function that counts all seconds from Jan.1,1970 to present time


    hrs = now/3600;     //Calculations as specified by assignment word.doc
    days = hrs/24;
    wks = days/7;
    mon = days/30.42;
    yrs = days/365;

    printf("%d years\n",yrs);       //Calculations are printed as specified in assignment word.doc
    printf("%d months\n",mon);
    printf("%d weeks\n", wks);
    printf("%d days\n",days);
    printf("%d hours\n", hrs);
    printf("Elapsed since Jan.1,1970\n");



    return (0);
}
