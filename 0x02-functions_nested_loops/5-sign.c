#include "main.h"
#include <stdio.h>

/**
 * print_sign - check the char if it is a letter or not
 * @n: The character to check
 *
 * Return: if it is greater than 0 return 1.
 * if it is 0, 0 is returned
 * if it is negative , -1 is returned
 */

int print_sign(int n)
{
 if (n > 0)
 {
  _putchar('+');
  return (1);
 }
 else if (n == 0)
 {
  _putchar('0');
  return (0);
 }
 else
 {
  _putchar('-');
  return (-1);
 }
}
