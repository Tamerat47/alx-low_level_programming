#include "main.h"
/**
 * *_memset - a function that fills the first memory area
 * @s: pointer
 * @b: char
 * @n: unsigned int of the frist integer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
