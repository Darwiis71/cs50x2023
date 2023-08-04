#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("What's your First name? ");
    string middle = get_string("What's your Middle name? ");
    string last = get_string("What's your Last name? ");
    printf("Hello, %s %s %s\n", first, middle, last);
}