#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Declare prototype function for conversion
string replace(string letters);

// Declare main that input CLI commands, specifically for one word
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("WRONG COMMAND LINE ARGUMENT!\n");
        return 1;
    }
    else
    {
        printf("%s\n", replace(argv[1]));
        return 0;
    }
}
// Formulate a function to convert individual characters to specific character
string replace(string letters)
{
    string new = letters;
    int lettercount = strlen(letters);
    int x = 0;
    for (x = 0; x < lettercount; x++)
    {
        char c = tolower(letters[x]);
        switch (c)
        {
            case 'a':
                new[x] = '6';
                break;
            case 'e':
                new[x] = '3';
                break;
            case 'i':
                new[x] = '1';
                break;
            case 'o':
                new[x] = '0';
                break;
            default:
                break;
        }
    }
    return new;
// I feel it is important to know how to thinking computationally
// There has to be function identifying specific character and auto converts it to its numeral look-alike variant.
// ASCII series? Strings are array of characters. str, char[][]
// Use the switch function, in this scenarario
}
