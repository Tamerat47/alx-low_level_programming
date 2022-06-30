#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two string
 * @s1: string.
 * @s2: string.
 * @n: number of bytes
 *
 * Return: Null and concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l = n, i;

	while (s1 == NULL)
		s1 = "";

	while (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	str = malloc(sizeof(char) * (l + 1));

	while (str == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		str[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[l++] = s2[i];

	str[l] = '\0';

	return (str);
}
