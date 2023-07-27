#include <stdio.h>

/**
 * main - finds and prints the sum fibonacci
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
 int x;
 unsigned long int y;
 unsigned long int z;
 unsigned long int forward;
 unsigned long int sum;

 y = 1;
 z = 2;
 sum = 0;

 for (x = 1; x <= 33; x++)
 {
  if (y < 4000000 && (y % 2) == 0)
  {
   sum = sum + y;
  }
  forward = y + z;
  y = z;
  z = forward;
 }
 printf("%lu\n", sum);
 return (0);
}
