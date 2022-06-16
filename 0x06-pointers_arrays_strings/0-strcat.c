#include "main.h"
/**
 * *_strcat - a funtion that concatenates two strings
 * @dest: is a 1st string
 * @src: is a 2nd string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	putchar(dest);
}

