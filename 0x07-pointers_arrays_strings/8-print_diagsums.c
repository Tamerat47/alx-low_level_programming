#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals of matrix
 * @a: a string
 * @size: square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, c = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[(size + 1) * i];
		d += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", c, d);
}
