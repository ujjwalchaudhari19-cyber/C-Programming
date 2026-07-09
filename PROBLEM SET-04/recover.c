#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[]){
  
  char filename[8];
  int image_count = 0;
  
  if(argc != 2){
    printf("Usage: ./recover image");
    return 1;
  }

  FILE *file = fopen(argv[1], "rb");
  FILE *output = NULL;

  if(file == NULL){
    return 1;
  }

  uint8_t sample[512];
  while(fread(sample, sizeof(uint8_t), 512, file) == 512){
    if((sample[0] == 0xff &&
      sample[1] == 0xd8 &&
      sample[2] == 0xff &&
      (sample[3] & 0xf0) == 0xe0)){
        if(output != NULL) fclose(output);
        sprintf(filename, "%03i.jpg", image_count);
        output = fopen(filename, "wb");
        image_count++;
    }
    if(output != NULL){
        fwrite(sample, sizeof(uint8_t), 512, output);
    }
  }

  fclose(file);
  fclose(output);
  return 0;
}