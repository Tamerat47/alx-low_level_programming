#include "main.h"
/**
 * rev_string - a function for reverse string
 * @s: string
 */
void rev_string(char *s)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
		break;
	}
	
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
