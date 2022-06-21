#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string
 * @accept: string
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			while (s[a] == accept[j])
			{
				s += i;
				return (s);
			}
		}
	}
	return ('\0');
}
