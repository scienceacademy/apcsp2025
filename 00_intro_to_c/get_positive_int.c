#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Pick a positive number: ");
    }
    while (n < 0);

    printf("You picked %i\n", n);
}
