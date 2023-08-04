// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
// Loop through string to check for ASCII
bool valid(string password)
{
    int counter = strlen(password);
    // Make the boolean conditions to be false
    bool uppercase, lowercase, number, symbol = false;

    // Check each char for the various requirements
    int x = 0;
    for (x = 0; x < counter; x++)
    {
        if (password[x] >= 65 && password[x] <= 90)
        {
            uppercase = true;
        }
        if (password[x] >= 97 && password[x] <= 122)
        {
            lowercase = true;
        }
        if (password[x] >= 48 && password[x] <= 57)
        {
            number = true;
        }
        if (password[x] >= 33 && password[x] <= 47)
        {
            symbol = true;
        }
    }
    // Return the true value back with the specifc conditions
    if (uppercase == true && lowercase == true && number == true && symbol == true)
    {
        return true;
    }
    return false;
}