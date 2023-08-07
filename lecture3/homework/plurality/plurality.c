#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // Loop through the candidate array to add vote to its name
    for (int x = 0; x < candidate_count; x++)
    {
        // If the comparison are equals , add score
        if (strcmp(candidates[x].name, name) == 0)
        {
            candidates[x].votes += 1;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // Placeholder for max votes received
    int vote = 0;
    // Iterate through each array, for its score, compare among other arrays for its greatest value
    for (int y = 0; y < candidate_count; y++)
    {
        if (candidates[y].votes > vote)
        {
            vote = candidates[y].votes;
        }
    }
    // Print out winner for matching votes to the highest based on the array
    for (int z = 0; z < candidate_count; z++)
    {
        if (candidates[z].votes == vote)
        {
            printf("%s\n", candidates[z].name);
        }
    }
    return;
}