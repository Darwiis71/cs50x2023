#include <cs50.h>
#include <stdio.h>

int getcredit(void);
int sumother(long credit);

int main(void)
{
    // Ask for credit card number
    int credit = getcredit();

    // Sum of the other digits from the other 2nd last digit
    long sum = sumother(credit);

    // Check for card length
}
// Prompt user for credit number. 16-digit (noting it will reject characters/symbols), get_long
int getcredit(void)
{
    long credit;
    do
    {
        credit = get_long("Number: ");
    }
    while (credit < 0);
    return credit;
}
// Loop for the modulo of the credit
int sumother(long credit)
{
    int sum;
    for (sum = 0; sum < 10; sum++)
    {
        sum = credit % 10;
        printf("%li\n", sum);
    }
    return credit;
}



// Input checksum algorithm

// Check for card length and starting digits

// Printf either AMEX, MASTERCARD, VISA, INVALID
