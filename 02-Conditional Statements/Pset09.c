#include <stdio.h>

int main()
{
  int grade;
  
  printf("Enter your grade (0-20): ");
  scanf("%d", &grade);
  
  if(grade >= 17 && grade <= 20)
    printf("Grade: A - Excellent!\n");
  else if(grade >= 15 && grade < 17)  
    printf("Grade: B - Very Good!\n");
  else if(grade >= 10 && grade < 15)
    printf("Grade: C - Good!\n");
  else if(grade >= 0 && grade < 10)
    printf("Grade: D - Needs Improvement!\n");
  else
    printf("Invalid grade! Please enter a number between 0 and 20.\n");
	   
  return 0;
}