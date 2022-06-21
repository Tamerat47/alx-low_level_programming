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
		for (b = 0; accept[b]; b++)
		{
			while (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
		}
	}
	return ('\0');
}
