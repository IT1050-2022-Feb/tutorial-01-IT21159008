/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark01 , mark02;
  float avg;

  printf("Enter your first mark :");
  scanf("%f",&mark01);

  printf("Enter your second mark :");
  scanf("%f",&mark02);

  avg = (mark01 + mark02)/2.0;

  printf("Average mark is : %.2f",avg);
  
  
  return 0;
}

