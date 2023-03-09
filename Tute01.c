/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h> //Function main begins program execution

int main() {
   
   float m1,m2,sum,avg; //Varibale Decleration
   
   printf("Enter marks of Subject 1 : "); //User input - Subject 1 marks
   scanf("%f",&m1);
   
   printf("Enter marks of Subject 2 : "); //User input - Subject 2 marks
   scanf("%f",&m2);
   
   sum=m1+m2; //Calculating the sum
   
   avg=sum/2.0; //Calculating the average
   
   printf("Average is %.2f",avg); //Printing the average
   
  return 0;
} //End of main function

