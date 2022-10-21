#include "main.h"
/**
 * print_triangle - print half triangle
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			_putchar(' ');
		}
		for (k = size - i; k >= 0; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
