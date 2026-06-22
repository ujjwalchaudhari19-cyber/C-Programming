#include <stdio.h>

int main(void)
{
  int changeowed;
  int coins;

  do{
  printf("How many cents do I owe? ");
  scanf("%d",&changeowed);
  }
  while(changeowed<0);


  while(changeowed>=25){
    changeowed = changeowed-25;
    coins++;
  }

  while(changeowed>=10 && changeowed<25){
    changeowed =  changeowed-10;
    coins++;
  }

  while(changeowed>=5 && changeowed<10){
    changeowed = changeowed-5;
    coins++;
  }

  while(changeowed>=1 && changeowed<5){
    changeowed = changeowed-1;
    coins++;
  }
  
  printf("Number of coins you get: %d\n", coins);
}