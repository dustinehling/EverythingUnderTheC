#include <stdio.h>

float l,w,h,v,V;

int main() {

//Prompts user for input data and scans for entries
printf("*Units of measurement in inches*\n");
printf("Please enter the length.\n");
scanf("%f", &l);
printf("Please enter the width.\n");
scanf("%f", &w);
printf("Please enter the height.\n");
scanf("%f", &h);

//Calculations
V=l*w*h;

l=l/12;
w=w/12;
h=h/12;

v=l*w*h;

//Prompts user of Volume calculation output
printf("The volume is %.2f cubic inches.\n", V);
printf("The volume is %.2f cubic feet.\n", v);
}
