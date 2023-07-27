#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit
 * @n: The int to print its latest digit
 *
 * Return: Success return the last digit of int.
 */

int print_last_digit(int n)
{
 int x;

 if (n < 0)
 {
  n = -n;
 }
 x = n % 10;
 if (x < 0)
 {
  x = -x;
 }
 _putchar(x + 48);

 return (x);
}
