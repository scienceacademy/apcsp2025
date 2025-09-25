#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, string argv[])
{
    int n = atoi(argv[1]);
    int hits = 0;
    float x, y;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        x = rand() / ((double) RAND_MAX + 1);
        y = rand() / ((double) RAND_MAX + 1);
        if (x * x + y * y < 1)
        {
            hits++;
        }
    }
    float pi = 4.0 * hits / n;
    printf("%f\n", pi);
}
