#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string n = get_string("What's your name? ");
    int a = get_int("What's your age? ");
    long p = get_long("State your mobile number: ");
    printf("Details are as follows: %s, %i, %li\n", n, a, p);
}