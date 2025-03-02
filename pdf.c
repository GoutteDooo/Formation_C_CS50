#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  char* file = argv[1];
  int r_queue = strlen(file) - 5;
  char* pdf_buffer = malloc(4);
  for (int i = strlen(file) - 1, j = i; i > r_queue; i--, j -= 2)
  {
    pdf_buffer[i - j] = file[i];
  }
  printf("%s\n",pdf_buffer);
  return 0;
}