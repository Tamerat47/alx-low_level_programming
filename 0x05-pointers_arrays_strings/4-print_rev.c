#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
