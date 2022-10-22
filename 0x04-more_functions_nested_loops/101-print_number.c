#include "holberton.h"

/**
  * print_number - Prints an integer.
  * @n: integer
  *
  * Return: 0
  */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if ((n == 0) && (n % 10 == 0)
		print_number(n);
	_putchar(n % 10 + '0');
}
