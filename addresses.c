#include <cs50.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("error\n");
        return 1;
    }
    int i = get_int("i: ");
    int j = get_int("j: ");
    printf("i: %i\n",i);
    printf("j: %i\n",j);
    return 0;
}