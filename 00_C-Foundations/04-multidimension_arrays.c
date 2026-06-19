#include <stdio.h>

int main(){
  char vowels[][5] = {
    {'a', 'e', 'i', 'o', 'u'},
    {'A', 'E', 'I', 'O', 'U'}
  };

  char value = vowels[1][4];

  printf("The vowel in 2nd row and 4th column is: %c",value);
  return 0;
}