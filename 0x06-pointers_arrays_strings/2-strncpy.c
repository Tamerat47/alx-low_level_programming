#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: string
 * @src: string
 * @n: int that strings the string depend on
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;
	while (src[i] && i < n)
		i++;
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
