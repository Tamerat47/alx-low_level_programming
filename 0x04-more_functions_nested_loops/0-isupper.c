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
		return (1);
	}
	else if (x >= 'a' && x <= 'z')
	{
		return (0);
	}
}
