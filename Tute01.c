/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark01,mark02,tot;
  float avg;

  printf("enter the mark01 : ");
  scanf("%d",&mark01);
  printf("enter the mark02 : ");
  scanf("%d",&mark02);
  tot=mark01+mark02;
  printf("total=%d\n",tot);
  avg=tot/2;
  printf("avarage=%.2f",avg);
  return 0;
}

