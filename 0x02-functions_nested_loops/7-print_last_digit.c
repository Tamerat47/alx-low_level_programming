#include "main.h"
/**
 * print_last_digit - print last digit
 * 
 * Return: always x
 */
int print_last_digit(int)
{
	int y,x;

	if (x < 0)
		x = -1 * x;
	y = x % 10;
	_putchar(y + '0');
	return (y);
}
