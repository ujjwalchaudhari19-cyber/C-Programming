#include <stdio.h>

int main(){
  int a = 779;
  int b = 779;

  if(a>b){
    printf("a is greater than b\n");
  }

  else if(a==b){
    printf("a and b both are equal\n");
  }

  else{
    printf("b is greater than a\n");
  }

  return 0;
}