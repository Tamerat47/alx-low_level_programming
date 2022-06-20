#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: char
 * Return: the string s form the char
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i])
	{
		i++;
	}
	while (j <= i)
	{
		if (c == s[j])
		{
			s = s + j;
			return (s);
		}
	j++;
	}
	return ('\0');
}
