#include <stdio.h>
#include <string.h>

typedef struct 
{
  char name[20];
  char number[20];
} person;


int main(void){

  person people[3];
  strcpy(people[0].name, "Kelly");
  strcpy(people[0].number, "+1-617-495-1000");

  strcpy(people[1].name, "David");
  strcpy(people[1].number, "+1-615-495-1000");

  strcpy(people[2].name, "John");
  strcpy(people[2].number, "+1-949-468-2750");

  char name[20];
  printf("Name: ");
  scanf("%s", name);

  for(int i = 0; i<3; i++){
    if (strcmp(people[i].name, name) == 0){
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }
}