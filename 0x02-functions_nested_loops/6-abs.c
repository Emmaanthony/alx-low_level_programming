#include "main.h"
#include <stdio.h>

/**
 * _abs - check the int if it is a Positive or not
 * @n: The int to check
 *
 * Return: Success return positive int.
 */

int _abs(int n)
{
 if (n < 0)
 {
  return (n * -1);
 }
 else
 {
  return (n);
 }
}
