#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * _strlen - ...
  * @b: The binary string
  *
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}

	return (sum);
}
/**
 * _strlen - ...
 * @s: ...
 * Return: c
 */

int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
