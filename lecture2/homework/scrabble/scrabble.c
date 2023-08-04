#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // if, else conditions for the score
    if (score1 > score2)
    {
        printf("Player 1 wins with %i points vs %i points\n", score1, score2);
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins with %i points vs %i points\n", score2, score1);
    }
    else
    {
        printf("Tie! with %i points\n", score1);
    }
}

// Assign array of individual character to specific score as shown in int points[]
// isupper will be needed to equalise the score between lower and uppercase, same for islower
// Loop through the addition of respective points based on the points[] array
// Do so by subtracting the -97 (ASCII = a) for the 1st lowercase character of the word represented as word[x]
// It will index the specific character, matching to the points uniquely
// Repeat for uppercase character
int compute_score(string word)
{
    // Track of score
    int score = 0;
    int length = strlen(word);
    int x = 0;
    // Char alphabet for the reminder of ASCII values behind it
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (x = 0; x < length; x++)
    {
        if (islower(word[x]))
        {
            score += POINTS[word[x] - 97];
        }
        if (isupper(word[x]))
        {
            score += POINTS[word[x] - 65];
        }
    }
    return score;
}