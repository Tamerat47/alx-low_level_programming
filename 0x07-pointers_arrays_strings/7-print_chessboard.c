#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array of string
 *
 * Return: always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	if (i < 8)
	{
		i++;
		if (j < 8)
		{
			j++;
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
