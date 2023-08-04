#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Strings are array of characters
    string words[2];

    words[0] = "Hi!";
    words[1] = "Bye!";

    printf("%i%i%i\n", words[0][0], words [0][1], words [0][2]);
    printf("%i%i%i%i\n", words[1][0], words[1][1], words[1][2], words [1][3]);
}