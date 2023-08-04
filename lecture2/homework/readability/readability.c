#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Declare prototype variable to count letters, words, sentences
int count_letters(string story);
int count_words(string story);
int count_sentences(string story);

// Prompt user for the text
int main(void)
{
    // Prompt for story
    string story = get_string("Text: ");

    // Formulating L = average no.of letters per 100 words, S = average. of sentences per 100 words
    // Typecast so to minimise truncation issue
    float L = (float) count_letters(story) * 100 / count_words(story);
    float S = (float) count_sentences(story) * 100 / count_words(story);
    // Input formula with float and auto rounder up
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    // Indicates rounded up to ones place
    else
    {
        printf("Grade %1.f\n", index);
    }
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