#include "main.h"
#include <stdio.h>

/**
 * times_table - print the 9X times table
 * @void
 *
 * Return: Success return the 9X times table
 */

void times_table(void)
{
 int x;
 int y;
 int z;

 for (x = 0; x < 10; x++)
 {
  for (y = 0; y < 10; y++)
  {
   z = x * y;
   if (y == 0)
   {
    _putchar(z + 48);
   }
   if (z < 10 && y != 0)
   {
    _putchar(44);
    _putchar(32);
    _putchar(32);
    _putchar(z + 48);
   }
   else if (z >= 10)
   {
    _putchar(44);
    _putchar(32);
    _putchar((z / 10) + 48);
    _putchar((z % 10) + 48);
   }
  }
  _putchar('\n');
 }
}
