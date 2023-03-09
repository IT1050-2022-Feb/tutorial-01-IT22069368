/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() { //Main function begins program execution

  int n; //Variable decleration
  int i,sum;

  printf("Enter number : "); //User input - Enter number
  scanf("%d",&n);

  for(i=1;i<=n;) //for loop
    {
      sum=sum+i; //Calculation inside the for loop

      i++; //increment of i
    }

  printf("Sum is %d",sum); //Printing sum
  
  return 0;
} //End of main function

