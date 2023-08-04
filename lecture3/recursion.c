#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    draw(1);
}

void draw(int n)
{
    for (int x = 0; x < n; x++)
    {
        printf("#");
    }
    printf("\n");
    draw(n + 1);
}
This is a bad example dont follow as the recursion occurs infinitely without stop signs