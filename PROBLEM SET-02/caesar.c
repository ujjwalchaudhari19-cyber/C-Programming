  #include <stdio.h>
  #include <ctype.h>
  #include <string.h>
  #include <stdlib.h>

  int main(int argc, char *argv[]){
    int i=0;
    char plain_text[10000];
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    while(argv[1][i]!='\0'){
      if (!(isdigit(argv[1][i]))){
        printf("Usage: ./caesar key\n");
        return 1;
      }
      i++;
    }

    int k = atoi(argv[1]);
    
    printf("Plain text: ");
    fgets(plain_text, 10000, stdin);
  }

int encrypt(char plain_text[], int k){
  int i =0;
  char cypher_text[10000];
  while(plain_text[i] !='\0'){
    if(isupper(plain_text[i])){
      ((plain_text[i] - 'A' + k) % 26) + 'A';
    }

    else if(islower(plain_text[i])){
      ((plain_text[i] - 'a' + k) % 26) + 'a';
    }

    else{
      continue;
    }
    i++;
  }
}
