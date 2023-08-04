#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Declare prototype variable to count letters
int count_letters(string story);
int count_words(string story);
int count_sentences(string story);

// Prompt user for the text
int main(void)
{
    // Prompt for story
    string story = get_string("Text: ");
    // Prints letter count
    printf("%i letters\n", count_letters(story));
    // Prints word count
    printf("%i words\n", count_words(story));
    // Prints sentence count
    printf("%i sentences\n", count_sentences(story));
    // Formulating L = average no.of letters per 100 words, S = average. of sentences per 100 words
    float L = (float) count_letters(story) * 100 / count_words(story);
    {
        printf("L = %.12f\n", L);
    }
    float S = (float) count_sentences(story) * 100 / count_words(story);
    {
        printf("S = %f\n", S);
    }
    // Input formula with float and auto rounder up
    float index = 0.0588 * L - 0.296 * S - 15.8;
    {
        printf("index = %f\n", index);
    }
        if (index <= 1)
        {
            printf("Before Grade 1\n");
        }
        else if (index >= 16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %1.f\n", index);
        }
    // Actual grade for proofread
    printf("Actual Grade: %f\n", index);

}
// Calculate the number of letters
// Exclude punctuation, digits, or other symbols.
int count_letters(string story)
{
    // Counting spaces, punctuations
    int x = 0;
    int special = 0;
    int letters = strlen(story);
    for (x = 0; x < letters; x++)
    {
        if (story[x] >= 32 && story[x] <= 64)
        {
            special++;
        }
    }
    // Return letter count excluding spaces, punctuation and more
    return letters - special;
}
// Calculate the number of words
int count_words(string story)
{
    int x = 0;
    int spaces = 0;
    int letters = strlen(story);
    for (x = 0; x < letters; x++)
    {
        if (story[x] == 32)
        {
            spaces++;
        }
    }
    return spaces + 1;
}

int count_sentences(string story)
{
    int x = 0;
    // Counts the . ! ?
    int end = 0;
    int letters = strlen(story);
    for (x = 0; x < letters; x++)
    {
        if (story[x] == 46 || story[x] == 33 || story[x] == 63)
        {
            end++;
        }
    }
    return end;
}