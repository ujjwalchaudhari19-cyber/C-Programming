#include <stdio.h>
#include <string.h>

typedef struct {
  char name[20];
  int votes;
} candidate;

int main(int argc, char *argv[]){
  int voters;
  char votes[30];

  if(argc<2){
    printf("Usage: ./plurality candidate1 candidate2 .....\n");
    return 1;
  }

  candidate people[argc -1];

  for(int i=0; i<argc-1; i++){
    strcpy(people[i].name, argv[i+1]);
    people[i].votes = 0; 
  }

  printf("How many voters: ");
  scanf("%i", &voters);

  for(int j=0; j<voters; j++){
    int found = 0; 
    printf("vote%i: ", j+1);
    scanf("%s", votes);

    for(int k=0;k<argc-1; k++){
      if(strcmp(people[k].name, votes)==0){
        people[k].votes++;
        found = 1;
        break;
      }
    }
    if(found==0){
      printf("INVALID VOTE\n");
    }
  }

  int max = 0; 
  for(int x=0; x<argc-1; x++){
    if (people[x].votes> max){
      max = people[x].votes;
    }
  }

  for(int y=0; y<argc-1; y++){
    if(people[y].votes == max){
      printf("%s\n", people[y].name);
    }
  }
}