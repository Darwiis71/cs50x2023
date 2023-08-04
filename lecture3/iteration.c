#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < x + 1; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}