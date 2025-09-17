#include <cs50.h>
#include <stdio.h>
void draw(int n);

int main(void)
{
    int height = get_int("height: ");

    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    // draw pyramid of height n-1
    draw(n - 1);
    // print n #
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
