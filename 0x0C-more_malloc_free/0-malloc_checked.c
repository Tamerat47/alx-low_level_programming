#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: size an int
  *
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	while (p == NULL)
		exit(98);

	return (p);
}
