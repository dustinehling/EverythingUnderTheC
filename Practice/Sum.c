#include <stdio.h>

long a,b,c,d,e;

int main() {

//Set up a loop since the user is prompted 5 times for a number
while (e<5) {

//Prompts user for input then scans for data
printf("Please enter a number.\n");
scanf("%ld", &a);
printf("You entered %ld.\n", a);


//Calculations of average/sum as well as counters for loop
b++;
e++;
c=c+a;
d=c/b;
}

//Prompts user with output of the calculations
printf("The sum of the numbers you entered is %ld.\n", c);
printf("The average is %ld.\n", d);
}
