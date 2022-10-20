#include "main.h"
/*
 * add - adds two integer
 *
 */
int add(int int)
{
	int a, b, c;

		c = a * b;

		if (c <= 9)
			_putchar(c);
		else
			_putchar((c / 10) + '0');

			_putchar((c % 10) + '0');
}
