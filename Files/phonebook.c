#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
  
  FILE *file = fopen("Phonebook.csv", "w");

  char *name = malloc(100*sizeof(char));
  char *number = malloc(100*sizeof(char));

  printf("Name: ");
  scanf("%s", name);

  printf("Number: ");
  scanf("%s", number);

  fprintf(file, "%s, %s\n", name, number);

  fclose(file);
}