// Demonstration of conditional statements
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    if (x < y)
    {
        printf("x is smaller\n");
    }
    if (x > y)
    {

        printf("x is bigger\n");
    }
    if (x == y)
    {
        print("they're the same\n");
    }
}
