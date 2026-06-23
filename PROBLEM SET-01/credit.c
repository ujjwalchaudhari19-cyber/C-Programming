#include <stdio.h>

int main(void){
  long cardnumber;
  long check;
  int digit;
  int splitdigit; 
  int checksum=0;
  int pos = 1;
  int length = 0;

  printf("Give your card number: ");
  scanf("%li", &cardnumber); 
  
  check = cardnumber;
  while(cardnumber>0){
    digit = cardnumber%10;
    cardnumber = cardnumber/10;
    
    if(pos%2==0){
      digit = digit*2;

      if(digit>9){
        splitdigit = digit%10;
        digit = digit/10;
        checksum = checksum + splitdigit + digit;
      }

      else{
        checksum = checksum + digit;
      }
    }

    else{
      checksum = checksum+digit;
    }

    length++;
    pos++;
  }

  if(checksum%10==0){
    printf("Card is legit\n");
    while(check>=100){
      check /= 10;
    }

    if((check == 34 || check == 37) && (length == 15)){
      printf("It is an american express!!\n");
    }

    else if((check == 51 || check == 52 || check == 53 || check ==54 || check == 55) && (length== 16)){
      printf("This is a master card\n");
    }

    else if((check/10 == 4) && (length ==13 || length == 16)){
      printf("Its a visa card\n");
    }
  }

  else{
    printf("Card is Fake\n");
  }

}