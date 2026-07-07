#include <stdio.h>

void swap(int *a, int *b);

int main(void){

  int x;
  int y;

  // printf("Value of x: ");
  scanf("%i", &x);

  // printf("Value of y: ");
  scanf("%i", &y);

  printf("Value of x: %i, Value of y: %i\n", x, y);

  swap(&x,&y);

  printf("Value of x: %i, Value of y: %i\n", x, y);
  
}

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}