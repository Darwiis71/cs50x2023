#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
// Prototype function that calculate hours based on the hours
float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    // Prompt users for how many weeks of CS50 they taken
    int weeks = get_int("Number of weeks taking SDW351: ");

    // Initialise an array according to a dynamic variable named weeks
    // For week 0, u completed x hours
    // For week 1, u completed y hours
    int hours[weeks];

    // For loop that prompt user for how many homework hours in the respective week
    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }
    // Auto convert to upper case and prompts strictly for T & A
    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');
    // Float value and print out the calculated hours
    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
// Calculate the hours and return back in the form of array
float calc_hours(int hours[], int weeks, char output)
{
    int sum = 0;
    for (int x = 0; x < weeks; x ++)
    {
        sum = sum + hours[x];
    }
    // Return according to the char output
    if (output == 'T')
    {
        return sum;
    }
    return sum / (float) weeks;
}