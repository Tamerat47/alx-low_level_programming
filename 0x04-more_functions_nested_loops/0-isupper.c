#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: integer
 * Return: 1 if c is uppercase and 0 if it is not
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
	{
		_putchar(c);
		_putchar(':');
		return (1);
	}
	if (c >= '97' && c <= '122')
	{
		_putchar(c);
		_putchar(':');
		return (0);
	}
}
