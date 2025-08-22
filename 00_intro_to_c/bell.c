#include <cs50.h>
#include <stdio.h>
void ding(int n);  // function prototype

int main(void)
{
    ding(4);
}

// this function rings the bell n times
void ding(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ding!\n");
    }
}
