#include "main.h"

/**
 * _puts_recursion - a function that print reverse a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i;

	while (s[i] != 0;)
	{
		_putchar(*s);
		i++;
		_puts_recursion(s)
	}
	_putchar('\n');
}
