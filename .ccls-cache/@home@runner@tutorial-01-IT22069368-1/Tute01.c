/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h> 

int main() { //Main function begins program execution

  float m1,m2,sum,avg; //Varible Decleration

  printf("Enter marks for Subject 1 : "); //User input - Marks for subject 1
  scanf("%f",&m1); 

  printf("Enter marks for Subject 2 : "); //User input - Marks for subject 2
  scanf("%f",&m2);

  sum=m1+m2; //Calculating the sum

  avg=sum/2.0; //Calculating the average

  printf("Average is %.2f",avg); //Printing the average
  
  return 0;
} //End of main function

