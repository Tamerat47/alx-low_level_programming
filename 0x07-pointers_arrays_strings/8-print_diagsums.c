#include "main.h"

/**
 * print_diagsums - function that prints the sum of two diagonals of matrix
 * @a: a string
 * @size: square matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, s1 = 0, s2 = 0;

	while (i < size)
	{
		s1 += a[(size + 1) * i];
		s2 += a[(sizse - 1) * (i + 1)];
		i++;
	}
	_putchar("%d,%d\n", s1, s2);
}
