#include "main.h"

/**
 * jack_bauer - print two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
		_Putchar(':');
		_putchar(b / 10 + '0');
		_putchar(b % 10 + '0');
		_putchar('\n');
		}
	}
	return (0);
}
