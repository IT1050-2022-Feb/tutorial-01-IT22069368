/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h> 
int minimum(int no1,int no2); //Function prototype
int maximum(int no1,int no2);
int multiply(int no1,int no2);

int main() { //Main function begins program execution
   int no1, no2; //Varible Decleration
   printf("Enter a value for no 1 : "); //User input - Number 1
   scanf("%d", &no1);
   printf("Enter a value for no 2 : "); //User input - Number 2
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2)); //Calling function
   printf("%d ", maximum(no1, no2)); //Calling function
   printf("%d ", multiply(no1, no2)); //Calling function
   return 0;
} //End of main function

int maximum(int no1,int no2) //Called function
{
  if(no1 > no2) //if condition
  {
    return no1;
  }
  else
  {
    return no2;
  }
}

int minimum(int no1,int no2) //Called function
{
  if(no1 < no2) //if condition
  {
    return no1;
  }
  else
  {
    return no2;
  }
}

int multiply(int no1,int no2 //Called function
{
  return no1*no2; //Calculation return
}