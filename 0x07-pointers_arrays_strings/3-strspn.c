#include "main.h"

/**
 *  _strspn - a function that gets the length of a prefix substring
 * @s: number of bytes string
 * @accept: source string
 * Return: always i.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			while (s[i] == accept[j])
			break;
		}
	while (s[i] != accept[j])
	break;
	}
	return (i);
}
