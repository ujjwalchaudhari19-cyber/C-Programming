#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int calculate_words(char para[]);
int calculate_letters(char para[]);
int calculate_sentences(char para[]);

int main(void)
{
  char para[10000];
  int words;
  int sentences;
  int letters;
  int grade;

  printf("Enter the paragraph:\n");
  fgets(para, 10000, stdin);

  words = calculate_words(para);
  letters = calculate_letters(para);
  sentences = calculate_sentences(para);

  float l = ((float)letters/words)*100;
  float s = ((float)sentences/words)*100;
  // printf("%i %i %i\n", words, letters, sentences);
  float index;
  index = 0.0588*l - 0.296*s - 15.8;
  grade = round(index);

  if(index<1){
    printf("Before Grade 1\n");
  }
  
  else if(index>1 && index<=  16){
    printf("Grade: %d\n", grade);
  }

  else{
    printf("Grade: 16+\n");
  }
}

int calculate_words(char para[]){
  int words = 0;
  int i=0;
  int spaces = 0;
  while(para[i] != '\0'){
    if(para[i] == ' '){
      spaces++;
    }
    i++;
  }
  words = spaces + 1;  
  return words;
}

int calculate_letters(char para[]){
  int letters = 0;
  int i = 0;

  while(para[i] != '\0'){
    if(isalpha(para[i])){
      letters++;
    }
    i++;
  }
    return letters;
}

int calculate_sentences(char para[]){
  int sentences = 0;
  int i = 0;

  while(para[i] != '\0'){
    if(para[i]== '.' || para[i] == '!' || para[i] == '?'){
      sentences++;
    }
    i++;
  }
  return sentences;
}