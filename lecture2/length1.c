#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Whats your name? ");
    int n = strlen(name);
    printf("%i\n", n);
}