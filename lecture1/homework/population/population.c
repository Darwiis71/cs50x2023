#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int s;
    do
    {
        s = get_int("Start size: ");
    }
    while (s < 9);

    // TODO: Prompt for end size
    int e;
    do
    {
        e = get_int("End Size: ");
    }
    while (e < s);

    // TODO: Calculate the number of years
    int y;
    for (y = 0; s < e; y++)
    {
        if (s < e)
        {
            s = s + s / 3 - s / 4;
        }
    }
    // TODO: Print number of years
    {
        printf("Years: %i\n", y);
    }
}
