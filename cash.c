#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // change must be positive
    float change;
    do
    {
        change = get_float("Change due: ");
    }
    while (change <= 0);

    // convert to cents
    int cents = change * 100;
    int coins = 0;

    // quarters
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    // dimes
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    // nickels
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

    // pennies
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("coins: %i\n", coins);
}
