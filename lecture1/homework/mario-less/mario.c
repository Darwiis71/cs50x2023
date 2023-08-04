#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for Height of Pyramid
    int height;
    do
    {
        height = get_int("Height:");
    }
    while (height <= 0 || height > 8);

    int row;
    for (row = 0; row < height; row++)
    {
        // Print out the dot spaces considering the descending value of dots through the rows
        int dots;
        // We want the dots to be of decreasing order height, 4,3,2,1 e.g of 5 for a right angled triangle
        // At row 1: height 1, 4 dot
        // At row 2: height 2, 3 dot
        // At row 3: height 3, 2 dot
        // Dots has to be subtracted by 1 per row that leads to the initialisation
        // Initialisation: dots = height - 1 to make space for the single hash
        // Condition: dots has to be more than the row no.,
        // Counter: neg due to the decreasing trend of dot number up the row number
        // Eventually it will end when dot numbers less than row no. 5 > 0, 4 > 0, until it is repeated 5 times
        for (dots = height - 1; dots > row; dots--)
        {
            printf(" ");
        }
        // Print out the hashes considering the ascending value of hashes through the rows
        int hash;
        // Repeat as above but now is with hashes
        // At row 1: height 1, 1 hash
        // At row 2: height 2, 2 hash
        // At row 3: height 3, 3 hash
        // Hash is the same as row number that leads to the initialisation
        // Initialisation: hash = 0 if hash = height, it will print 5 hash.
        // Condtion: hash has to be less than row number (as row no. increases),
        // Counter: positive
        // Eventually end when hash number is less than row number due to the neg counter
        for (hash = 0; hash - 1 < row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}