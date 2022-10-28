#include "main.h"

/**
  * print_number - Prints an integer.
  * @n: integer
  *
  * Return: 0
  */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	i = (n / 10);

	if (i != 0)
		print_number(i);

	_putchar(n % 10 + '0');
}
