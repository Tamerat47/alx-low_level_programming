#include "holberton.h"

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	while (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	while (s == NULL)
		return (NULL);

	while (i > j)
	{
		s[j] = str[j];
		a++;
	}

	s[j] = '\0';
	return (s);
}
