#include "main.h"
#include <stdio.h>

/**
 * _islower - check the char if it is lowercase or not
 * @c: The character to check
 *
 * Return: if it is LowerCase 1.
 * UpperCase, 0 is returned
 */

int _islower(int c)
{
 if (c > 97 && c < 123)
 {
  return (1);
 }
 else
 {
  return (0);
 }
}
