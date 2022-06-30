#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum array value.
 * @max: maximum array value.
 *
 * Return: NULL and array.
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	while (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1);

	while (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}
