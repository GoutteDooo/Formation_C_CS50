#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *x = malloc(3 * sizeof(int));
  x[1] = 72;
  x[1] = 73;
  x[1] = 33;
  return 0;
}