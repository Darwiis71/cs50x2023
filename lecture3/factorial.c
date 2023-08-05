#include <cs50.h>
#include <stdio.h>

int factorial(int number);

int main(void)
{
    // Prompt the user for number
    int n = get_int("Type a number: ");
    // Calls for value and function below
    printf("%i\n", factorial(n));
}

int factorial(int number)
{
// Here is the base case that if its 1, it will be 1. A well known number,
    if (number == 1)
    {
        return 1;
    }

// The following below is a recursive step the common repetitive function identified
    return number * factorial(number - 1);
// Iterative version below
    int solution = number;
    for (int x = number - 1; x > 0; x--)
    {
        solution = solution * x;
    }


}