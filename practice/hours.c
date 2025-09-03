#include <cs50.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking APCSP: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i hours coding: ", i);
    }

    char choice;
    do
    {
        choice = get_char("Enter T for total hours, A for average hours per week: ");
    }
    while (choice != 'T' && choice != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, choice));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char choice)
{
    // Your code here
}
