#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    string name = get_string("Name: ");
    for (int x = 0; x < 2; x++)
    {
        if (strcmp(people[x].name, name) == 0)
        {
            printf("Found: %s\n", people[x].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

n is the number of comparison selection sort
For i from 0 to n-1
    Find smallest number between numbers[i] and numbers [n-1]
    Swap smallest number with numbers [i]

bubble sort
Repeat n times
    For i from 0 to n-2
        If numbers[i] and numbers[i+1] out of order
            Swap them


Repeat n-1 times
    For i from 0 to n-2
        If numbers[i] and numbers[i+1] out of order
            Swap them
    If no swaps
        Quit