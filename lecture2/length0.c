#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Whats your name? ");
    // Generates the number of characters until it reaches NUL
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("No. of letters in your name: %i\n", n);
}