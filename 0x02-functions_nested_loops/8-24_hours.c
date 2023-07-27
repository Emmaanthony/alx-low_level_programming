#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute
 * @void
 *
 * Return: Success return the last digit of int.
 */

void jack_bauer(void)
{
 int x;
 int y;

 for (x = 0; x < 24; x++)
 {
  for (y = 0; y < 60; y++)
  {
   _putchar((x / 10) + 48);
   _putchar((x % 10) + 48);
   _putchar(':');
   _putchar((y / 10) + 48);
   _putchar((y % 10) + 48);
   _putchar('\n');
  }
 }
}
