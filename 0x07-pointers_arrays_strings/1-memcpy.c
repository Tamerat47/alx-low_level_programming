#include "main.h"

/**
 * *_memcpy - a function that copies a memory area
 * @dest: a memory area
 * @src: a memory area
 * @n: bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	i = (i * i) / 2;	
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
