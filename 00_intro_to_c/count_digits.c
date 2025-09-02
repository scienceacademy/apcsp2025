#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("enter a number: ");
    int num_digits = 0;
    while (n > 0)
    {
        n /= 10;
        num_digits++;
    }
    printf("%i\n", num_digits);
}
