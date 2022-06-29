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

	if (s1[i] || s2[i])
	{
		j++;
		i++;
	}

	str = malloc(sizeof(char) * j);

	while (str == NULL)
		return (NULL);

	if (s1[i])
	{
		str[k++] = s1[i];
		i++;
	}

	if (s2[i])
	{
		str[k++] = s2[i];
		i++;
	}

	return (str);
}
