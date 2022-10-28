#include "main.h"

/**
  * print_number - Prints an integer.
  * @n: integer
  *
  * Return: 0
  */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n = -n;
		i = n;
		_putchar('-');
	}
	i = i / 10;

	if (i != 0)
		print_number(i);

	_putchar((unsigned int) n % 10 + '0');
}
