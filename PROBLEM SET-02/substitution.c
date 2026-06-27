#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void encrypt(char plain_text[], char key[]);

int main(int argc, char *argv[]){//Used to take command line arguments more than 1.
  int i=0;
  int freq[26] = {0};
  int j = 0;
  char plain_text[10000];
  char cypher_text[10000]; 

  if (argc != 2){//If no. of arguments != 2: Error.
    printf("Usage: ./substitution key\n");
    return 1;
  }

  int length = strlen(argv[1]);

  if(length != 26){//If length != 26: Error
    printf("Usage: ./substitution key\n");
    return 1;
  }

  while(argv[1][i]){//Traversing till the end of the key.

    if(!(isalpha(argv[1][i]))){//If key is non numeric: Error.
      printf("Usage: ./substitution key\n");
      return 1; 
    }
    freq[toupper(argv[1][i]) - 'A']++;
    i++;
  }

  for(j=0; j<26; j++){//If any alpha is repeated in key: Error.
    if(freq[j]>1){
      printf("Usage: ./substitution key\n");
      return 1; 
    }
  }

  printf("Plain text: ");
  fgets(plain_text, 10000, stdin);

  printf("Cypher text: ");
  encrypt(plain_text,argv[1]);
  return 0;
}

void encrypt(char plain_text[], char key[]){
  int i = 0;
  
  while(plain_text[i] != '\0'){
    if(islower(plain_text[i])){
      printf("%c",tolower(key[plain_text[i] - 'a']));// Substitute lowercase letter and preserve case
    }

    else if(isupper(plain_text[i])){
      printf("%c",toupper(key[plain_text[i] - 'A']));// Substitute uppercase letter and preserve case
    }

    else{
      printf("%c", plain_text[i]);//Substitute as it is if its not a alphabet.
    }
    i++;
  }
}