#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

int main(void)
{
    candidate president;
    president.name = "Alyssa";
    president.votes = 10;
}