#include "main.h"
/**
 * print_triangle - print half triangle
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = size; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
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
