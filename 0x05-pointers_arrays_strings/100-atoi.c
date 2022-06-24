#include "main.h"

/**
 * _atoi - a function that Converts a string to an integer.
 * @s: The string
 *
 * Return: The integer converted string
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;

	while (*s++)
	{
		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			y = (y * 10) + (*s - '0');

		else if (y > 0)
			break;

	}

	z = (num * sign);
	return (z);
}
