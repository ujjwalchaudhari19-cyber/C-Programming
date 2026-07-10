#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
}node;

int main(void){
  node *list = NULL;


  for(int i = 0; i<3; i++){
    node *n = malloc(sizeof(node));
    if(n==NULL){
      return 1;
    }

    printf("Number: ");
    scanf("%i", &n->number);
    n -> next = NULL;

    //Prepend node to list
    n -> next = list;
    list = n;
  }
  return 0;
}