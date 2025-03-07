#include <stdio.h>
#include <stdint.h>


int main(int argc, char* argv[])
{
  if (argc != 2) return 1;
  FILE* input = fopen(argv[1], "r");

  uint8_t buffer[4];//size of byte : unsigned int (8B)

  uint8_t signature[] = {0x25, 0X50, 0x44, 0x46};

  fread(buffer, sizeof(uint8_t), 4, input);

  for (int i = 0; i < 4; i++)
  {
    if (buffer[i] != signature[i])
    {
      printf("This is not a PDF File.\n");
      return 0;
    }
  }
  printf("This is a PDF File!\n");
  fclose(input);
  return 0;
}