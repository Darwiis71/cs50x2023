#include <stdio.h>
#include <cs50.h>
// I want to have 3 test scores from the user to find out their average score
// Declare global variable of 3
const int number = 3;

// Declare prototype variable
float mean(int array[]);

// Prompt user for their scores in a loop of 3 times
int main(void)
{
    int score[number];
    for (int x = 0; x < number; x++)
    {
        score[x] = get_int("What's your score for your exam: ");
    }
    // Print out their average score
    printf("Average score: %.3f\n", mean(score));
}
// Calculate the sum and mean
float mean(int array[])
{
    int sum = 0;
    for (int x = 0; x < number; x++)
    {
        sum = sum + array[x];
    }
    return sum / (float) number;
}