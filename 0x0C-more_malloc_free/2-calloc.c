#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: number of memb
  * @size: byte size
  *
  * Return: Null or pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	p = malloc(j);

	while (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		p[i] = 0;
	}

	return (p);
}
