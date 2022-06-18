#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: integer
 * Return: 1 if c is uppercase and 0 if it is not
 */
int _isupper(int c)
{
	int x = c;

	if (x >= 'A' && x <= 'Z')
	{
		putchar(c);
		putchar(':');
		putchar(' ');
		putchar('1');
	}
	if (x >= 'a' && x <= 'z')
	{
		putchar(c);
		putchar(':');
		putchar(' ');
		putchar('0');
	}
}
