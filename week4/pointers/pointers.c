#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
void pdecrement(int *x);
int vdecrement(int x);

int main(void)
{
  int* pk = malloc(1);
  *pk = get_int("k: ");
  printf("k= %i\n", *pk);
  return 0;
}

void pdecrement(int *x)
{
  (*x)--;
}

int vdecrement(int x)
{
  return --x;
}