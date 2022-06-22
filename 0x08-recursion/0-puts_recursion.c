#include "main.h"

/**
 * _puts_recursion - a function that print reverse a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n')
	return;
}
