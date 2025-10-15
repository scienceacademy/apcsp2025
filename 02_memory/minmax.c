#include <stdio.h>

void findMinMax(TODO);

int main()
{
    int numbers[] = {15, 3, 9, 21, 6, 12};
    int n = 6;
    int min, max;

    // Pass addresses of min and max so the function can modify them
    findMinMax(numbers, n, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
}

void findMinMax(int arr[], int size, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
