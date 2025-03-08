#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
float guess_blue(int blueStart, int redStart, int bluePulled, int redPulled);
bool pythagorean_triple(const unsigned sides[3]);
int diffsum(const int *arr, size_t n);

int main(void)
{
  diffsum();
  return 0;
}


int diffsum(const int *arr, size_t n)
{
  //Take highest value of arr
  int h1 = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > h1)
    {
      h1 = arr[i];
    }
  }
  //Then, take the highest before this one
  //Add it to sum
  //Then, search highest value again before the highest2
  //And continue the ope
    return 0;
}

int main_pythagorean_triple(void)
{
  const unsigned int a[3] = {5,3,4};
  bool b = pythagorean_triple(a);
  printf("%b\n",b);
  return 0;
}

bool pythagorean_triple(const unsigned sides[3])
{
  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    int calc = sides[i] * sides[i];
    for (int j = 0; j < 3; j++)
    {
      //on ne veut pas vérifier le même indice
      if (i == j) continue;
      sum += sides[j]*sides[j];
    }

    printf("sum = %i & sides[i] = %i\n",sum, calc);
    if (sum == calc)
    {
      return true;
    }
  }
  return false;
}

int main_guess_blue(int argc, char* argv[])
{
  if (argc != 5) return 1;
  float f = guess_blue(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));
  printf("%f\n",f);
  return 0;
}

float guess_blue(int blueStart, int redStart, int bluePulled, int redPulled)
{
  int total_marbles_left = blueStart + redStart - bluePulled - redPulled;
  int blue_left = blueStart - bluePulled;
  return ((float)blue_left / total_marbles_left);
}
