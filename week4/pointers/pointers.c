#include <cs50.h>
#include <stdio.h>
void decrement(int *x);

int main(void)
{
  int k = 52;
  int* pk = &k;
  // printf("k before dec: %i\n", k);
  decrement(pk);
  // printf("k after dec: %i\n", k);
  return 0;
}

void decrement(int *x)
{
  printf("x before dec pointed: %p\n", x);
  x--;
  printf("x after dec pointed: %p\n", x);
}