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
		continue;
	}

	if (n != 0)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
		_putchar('0');
}
