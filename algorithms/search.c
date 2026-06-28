#include <stdio.h>
#include <string.h>

int main(void){
  char strings[6][20] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

  char string[20];
  printf("String: ");
  scanf("%s", string);

  for(int i = 0; i < 6; i++){
    if(strcmp(strings[i], string)){
      printf("Found\n");
      return 0;
    }
    printf("Not found\n");
    return 1; 
  }
}