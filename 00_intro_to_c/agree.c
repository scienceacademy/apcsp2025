// Demonstration of more complex conditional statements
// using || (or) and && (and)
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? (y/n) ");

    if (c == 'y' || c == 'Y')
    {
        printf("agreed\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("not agreed\n");
    }
}
