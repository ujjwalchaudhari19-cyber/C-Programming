#include <stdio.h>
#include <string.h>
#include <ctype.h>

int calculate_score(char word[]);

int main(void)
{
  char player1[100];
  char player2[100];

  printf("Player 1: ");
  scanf("%s", player1);

  printf("Player 2: ");
  scanf("%s", player2);


  if(calculate_score(player1)>calculate_score(player2)){
    printf("Player 1 wins\n");
  }

  else if(calculate_score(player1)<calculate_score(player2)){
    printf("Player 2 wins\n");
  }

  else{
    printf("Its a tie\n");
  }
}

int calculate_score(char word[])
{
  int i=0;
  int score = 0;
  int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  
  while(word[i]!='\0'){
    score = score + points[toupper(word[i])-'A'];
    i++;
  }
  return score;
}