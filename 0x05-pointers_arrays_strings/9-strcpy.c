#include "main.h"
/**
 * _strcpy - a function copies the string pointed to by src
 * @dest: A pointer  char
 * @src: A pointer  char
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; dest[i] != '\0';)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
