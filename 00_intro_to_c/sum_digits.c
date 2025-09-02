#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("enter a number: ");
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%i\n", sum);
}
