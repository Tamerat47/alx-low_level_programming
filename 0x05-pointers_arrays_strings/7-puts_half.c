#include "main.h"
/**
 * puts_half - prints half a string
 *
 * @str: is a string
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
		j++;
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
