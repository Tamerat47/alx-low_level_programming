#include "main.h"
/**
 * print_most_numbers - a function that number 0-9 except 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
		}
	i++;
	}
	_putchar('\n');
}
