#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: char
  * Return: an array y.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	while (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	while (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
