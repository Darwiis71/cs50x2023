#include <stdio.h>
#include <cs50.h>
// Defining the struct with the data types and its variables
typedef struct
{
    string name;
    int votes;
}
candidate;
// Declare protype function earlier
candidate get_candidate(string prompt);

int main(void)
{
    candidate candidates_array[3];

    for (int x = 0; x < 3; x++)
    {
        candidate_array[x] = get_candidate("Enter a candidate ");
    }
    printf("President: %s", prompt[])
}

// Make a function get_candidate, return a whole new data type named candidate
// Inputs will be a string, prompt from a user
candidate get_candidate(string prompt)
{
    // Prints what the user type in based on the prompts given by user
    printf("%s\n", prompt);
    // Create a throwway function to return to main void
    candidate c;

    c.name = get_string("Enter a name: ");
    c.votes = get_int("Enter a number of votes: ");

    return c;
}