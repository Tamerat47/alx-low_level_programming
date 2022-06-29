#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated
 * @s2: The string to be concatenated
 *
 * Return: null and str
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, k = 0, j = 0;

	while (s1 == NULL)
		s1 = "";

	while (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		j++;

	str = malloc(sizeof(char) * j);

	while (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[k++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[k++] = s2[i];

	return (str);
}
