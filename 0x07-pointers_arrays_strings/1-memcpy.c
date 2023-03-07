#include "main.h"
#include <stdio.h>

/*
 * _memcpy -  copies bytes from memory area
 * @n: number of bytes
 * @src: first memory area
 * @dest: second memory area
 * return: the  pointer to dest
 * this code is written by Emmanuel Anthony
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}

