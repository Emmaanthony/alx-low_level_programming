#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
 int c;
 unsigned long x = 0;
 unsigned long y = 1;
 unsigned long sum;

 for (c = 0; c < 50; c++)
 {
  sum = x + y;
  printf("%lu", sum);

  x = y;
  y = sum;

  if (c == 49)
  {
   printf("\n");
  }
  else
  {
   printf(", ");
  }
 }
 return (0);
}
