#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int* list = malloc(3 * sizeof(int));
  if (list == NULL)
  {
    return 1;
  }
  list[0] = 1;
  list[1] = 2;
  list[2] = 3;

  //Time passes

  int *tmp = realloc(list, 4 * sizeof(int));
  if (tmp == NULL)
  {
    free(list);
    return 1;
  }

  tmp[3] = 4;
  for (int i = 0; i < 4; i++)
  {
    printf("%i\n", tmp[i]);
  }

  free(list);
  /*
  list = tmp;

for (int i = 0; i < 4; i++)
{
  printf("%i\n", list[i]);
}

// Time passes
free(list);
*/
  return 0;
}