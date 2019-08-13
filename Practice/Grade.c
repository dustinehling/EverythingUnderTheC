#include <stdio.h>
#include <stdlib.h>

char LetterGrade(double score)  //Function
{
	if (score >= 90)  // You could add extra parameters like score >= 90 && score <= 100 but I just used one
		return 'A';
	if (score >= 80)
		return 'B';
	if (score >= 70)
		return 'C';
	if (score >= 60)
		return 'D';
	return 'F';
}

int main()	{
	double score = 0.0; // Zeroed out to reduce chance for error

	printf("Enter the grade: \n", LetterGrade(score)); //Prompt for grade then scans input and puts that through function above
	scanf("%lf", &score);
	printf("Grade: %lf", score);
	printf("\nYour grade is: %c \n", LetterGrade(score)); // Outputs letter grade from function
}
