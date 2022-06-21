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

	while (i < 8)
	{
		i++;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
	_putchar('\n');
	}
}
