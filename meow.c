#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int counter = 5;
    while (counter >=0)
    {
        printf("Good morning baby!\n");
        counter = counter - 1;
    }
    string s = get_string("Who do I love the most in my life? ");
    {
        printf("Indeed it is sweetie %s\n", s);
    }
}