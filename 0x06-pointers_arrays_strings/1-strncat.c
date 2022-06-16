#include "main.h"
/**
 * _strncat - a funtion that concatenates two strings
 * @dest: is a 1st string
 * @src: is a 2nd string
 * @n: it will use at most n bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
