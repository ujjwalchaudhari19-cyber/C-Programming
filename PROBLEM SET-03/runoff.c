#include <stdio.h>
#include <string.h>

typedef struct{
  char name[100];
  int votes;
  int eliminated;
}candidate;

int main(int argc, char *argv[]){
  int voters;
  char vote[20];

  if(argc<2){
    printf("Usage ./runoff candidate1 candidate2.....\n");
    return 1;
  }

  candidate people[argc-1];

  for(int i=0; i<argc-1; i++){
    strcpy(people[i].name, argv[i+1]);
    people[i].votes=0;
    people[i].eliminated=0;
  }

  printf("How many voters: ");
  scanf("%i", &voters);

  int prefs[voters][argc-1];

  for(int i = 0; i < voters; i++)
    for(int j = 0; j < argc-1; j++)
        prefs[i][j] = 0;

  for(int i=0; i<voters; i++){
    for (int j = 0; j<argc-1; j++){
      int found = 0;
      printf("Rank %i: ", j+1);
      scanf("%s", vote);
      
    for(int k=0; k<argc-1; k++){
      if(strcmp(people[k].name, vote)==0){
        prefs[i][j] = k;
        found = 1;
        break;
      }
    }

    if(found ==0){
      printf("INVALID VOTE\n");
      return 1;
    }
    }
    printf("\n");
  }

  while(1){
    for(int a = 0; a<voters; a++){
      for(int b = 0; b<argc-1; b++){
        if(people[prefs[a][b]].eliminated == 0){
          people[prefs[a][b]].votes++;
          break;
        } 
      }
    }

    for(int x =0; x<argc-1; x++){
      if(people[x].eliminated ==0 && people[x].votes> voters/2){
        printf("%s\n", people[x].name);
        return 0; 
      }
    }

    int min=voters; 
    for(int y= 0; y<argc-1; y++){
     if(people[y].eliminated !=0){
      continue;
     } 

     if(people[y].votes< min){
      min = people[y].votes; 
     }
    }

    for(int z =0; z<argc-1; z++){
    if(people[z].votes==min){
      people[z].eliminated = 1;
      }
    }

    for(int l=0; l<argc-1; l++){
      people[l].votes=0;
    }
    
  }
}