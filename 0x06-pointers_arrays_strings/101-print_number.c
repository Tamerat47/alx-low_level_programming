#include "main.h"

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
		_putchar('-');
		n = -n;
	}
	n = n / 10;

	if (n != 0)
		print_number(n);

	_putchar((unsigned int) n % 10 + '0');
}
