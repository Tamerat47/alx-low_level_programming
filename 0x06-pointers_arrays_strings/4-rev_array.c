#include "main.h"

/**
 * reverse_array - a function reverse the content of the an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, l;

	for (i = 0; i < n / 2; i++)
	{
		l = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = l;
	}
	_putchar(a[i]);
}
