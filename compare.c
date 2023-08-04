#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int x = get_int("What's x? ");
   int y = get_int("What's y? ");

   if (x < y)
   {
      printf("x is less than y\n");
   }
   else if (x > 10)
   {
      printf("x is more than y\n");
   }
   else
   {
      printf("x equals to y\n");
   }
}