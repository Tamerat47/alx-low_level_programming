#include "main.h"
/**
 * rev_string - a function for reverse string
 * @s: string
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
