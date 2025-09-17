#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[4];

    people[0].name = "Kai";
    people[0].number = "818-123-4567";

    people[1].name = "Ethan";
    people[1].number = "818-123-4567";

    people[2].name = "Ava";
    people[2].number = "818-123-4567";

    people[3].name = "Avi";
    people[3].number = "818-123-4567";


    string name = get_string("Name: ");
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(name,people[i].name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 1
        }
    }
    printf("Not found.\n");
    return 1;
}
