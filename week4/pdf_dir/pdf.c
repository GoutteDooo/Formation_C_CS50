#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main(int argc, char* argv[])
{
  if (argc != 2) return 1;
  FILE* input = fopen(argv[1], "r");

  uint8_t b[4];//size of byte : unsigned int (8B)

  uint8_t signature[] = {0x25, 0X50, 0x44, 0x46}

  fread(buffer, sizeof())

  fclose(input);
  return 0;
}