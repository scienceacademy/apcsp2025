#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int NUM = 3;
    int scores[NUM];
    for (int i = 0; i < NUM; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(scores, NUM));
}

float average(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
