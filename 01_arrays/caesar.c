#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <shift>\n");
        return 1;
    }
    int shift = atoi(argv[1]);
    string cleartext = get_string("Cleartext: ");

    for (int i = 0, n = strlen(cleartext); i < n; i++)
    {
        char c = cleartext[i];
        if (isupper(c))
        {
            printf("%c", (c - 'A' + shift) % 26 + 'A');
        }
        else if (islower(c))
        {
            printf("%c", (c - 'a' + shift) % 26 + 'a');
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}
