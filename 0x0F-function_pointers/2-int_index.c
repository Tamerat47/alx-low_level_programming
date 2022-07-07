#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: integers array.
 * @size: array size
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: If no element matches, return -1 and If size <= 0, return -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		return (i);

		i++;
	}

	return (-1);
}
