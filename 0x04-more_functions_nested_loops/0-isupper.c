#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: integer
 * Return: 1 if c is uppercase and 0 if it is not
 */
int _isupper(int c)
{
	int c;
	char a = c;

	if (a >= '65' && a <= '90')
		return (1);
	else
		return (0);
}
