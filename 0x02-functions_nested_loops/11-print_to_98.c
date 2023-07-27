#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers to 98X
 * @n: first number
 *
 * Return: all numbers from n to 98X
 */

void print_to_98(int n)
{

 int x;
 int y;

 if (n < 99)
 {
  for (x = n; x < 99; x++)
  {
   if (x != 98)
    printf("%d, ", x);
   else if (x == 98)
    printf("%d\n", x);
  }
 }
 else if (n > 98)
 {
  for (y = n; y > 97; y--)
  {
   if (y != 98)
    printf("%d, ", y);
   else if (y == 98)
    printf("%d\n", y);
  }
 }
}
