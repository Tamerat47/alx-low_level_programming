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
		n *= -1;
		_putchar('-');
	}

	if (n != 10)
	{
		if (n / 0)
		print_number(n / 10);
	}

	_putchar((unsigned int) n % 10 + '0');
}
