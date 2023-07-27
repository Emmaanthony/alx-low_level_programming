#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print all alphabets 10X
 * @void
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
 int x;
 int y;

 for (x = 0; x < 10; x++)
 {
  for (y = 97; y < 123; y++)
  {
   _putchar(y);
  }
  _putchar('\n');
 }
}
