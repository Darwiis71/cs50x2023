#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("Whats your age?\n");
    {
        printf("Congratulations on being %d\n", i);
        printf("Now that you have tell me that you are %d\n", i);
    }
    string s = get_string("What is your name?\n");
    {
        printf("It is a great pleasure to meet you %s\n", s);
        printf("Let us play a math game shall we?\nDepending on your age it will drive the game differently\n");
    }
    {
    char c = get_char("To proceed, enter 'Y' if not 'N' \n");
        {
            if (c == 'Y' || c == 'y' )
            printf("Good.\n");
        }
        {
            if (c == 'N' || c == 'n' )
            printf("boo such a party pooper\n");
        }
    }
    if (i <= 11)
    {
        int young = get_int("What is 10 added to your age? Which you mentioned earlier %d\n", i);
        if (young == 10+i)
        {
            printf("Congratulations you are correct %s\n", s);
        }
        else
        {
            printf("Nope :3 Try again %s\n", s);
        }
    }
    else
    {
        int old = get_int("What is 7 multiplied by your age? Which was %d\n", i);
        if (old == 7*i)
        {
            printf("Naisu u are a pro\n");
            int pro = get_int("What is 5 times previous answer? Which was %d\n", old);
            {
                if (pro == 5*old)
                printf("<3 wow u are a math wizard, %s\n", s);
            }
            {
                if (pro != 5*old)
                printf("bruh u suck HAHA, %s\n", s);
            }

            if (((500 < pro) && (pro < 1200)) && (pro == 5*old))
            {
                char g = get_char ("Does your final answer falls within the domain range 500 < X < 1200? Type 'Y'/'N'\n");
                {
                    if (g == 'Y' || g == 'y')
                    printf("Fantastic! ^.^ %s\n", s);
                }
            }
            if ((pro > 1200) && (pro == 5*old))
            {
                char g = get_char ("Does your final answer falls within the domain range 500 < X < 1200? Type 'Y'/'N'\n");
                {
                    if (g == 'N' || g == 'n')
                    printf("Good you know ur math! ^.^ %s\n", s);
                }
                {
                    if (g == 'Y' || g == 'y')
                    printf("bruh nice try for making it this far but wrong loser, %s\n", s);
                }
            }
        }
        if (old != 7*i)
        {
            printf("oof wrong %s\n", s);
        }
    }
}