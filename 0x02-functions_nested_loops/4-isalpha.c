#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check the char if it is a letter or not
 * @c: The character to check
 *
 * Return: if it is Letter 1.
 * Not letter 0 is returned
 */

int _isalpha(int c)
{
 if ((c > 96 && c < 123) || (c > 64 && c < 91))
 {
  return (1);
 }
 else
 {
  return (0);
 }
}
