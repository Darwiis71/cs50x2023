#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Set a formula to convert ASCII to Binary (base-2)
    // 1 = 00000001
    // 2 = 00000010
    // 3 = 00000011
    // 4 = 00000100
    // 5 = 00000101
    // 6 = 00000110
    // 7 = 00000111
    // 8 = 00001000
    string text = get_string("Message: ");
    int length = strlen(text);
    int x = 0;
    int z = 0;
    int new[length];
    // Read through the char of the string
    for (x = 0; x < length; x++)
    { // Placeholder for values
        int store[] = {0, 0, 0, 0, 0, 0, 0, 0};
        // To see ASCII values of the character
        new[x] = text[x] * 2;
        // To repeat division of 2 to print binary
        for (z = 0; new[x] > 0; z++)
        {
            new[x] = new[x] / 2;
            // Update store[] with updated values from modulo 2 (either 1 or 0)
            store[z] = new[x] % 2;
        }

        // Print in the reverse order
        for (int y = BITS_IN_BYTE - 1; y >= 0; y--)
        {
            print_bulb(store[y]);
        }
        printf("\n");
    }
}

// Notice how all of this values are not actually stored, but rather passed through...

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}