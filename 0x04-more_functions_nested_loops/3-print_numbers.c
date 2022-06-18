#include "main.h"
/**
 * print_numbers - print number 0-9
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
