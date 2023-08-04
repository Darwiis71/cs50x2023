#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("<3");
        }
        printf("\n");
    }
}