#include <stdio.h>

int main(){
  int numbers[10];

  numbers[0] = 45;
  numbers[1] = 67;
  numbers[2] = 65;
  numbers[3] = 61;
  numbers[4] = 47;
  numbers[5] = 98;
  numbers[6] = 19;
  numbers[7] = 04;
  numbers[8] = 07;
  numbers[9] = 05;

  printf("The 7th number in the array is: %d", numbers[6]);
  return 0;
}