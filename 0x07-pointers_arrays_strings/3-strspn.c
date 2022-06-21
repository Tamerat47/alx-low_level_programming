#include "main.h"

/**
 *  _strspn - a function that gets the length of a prefix substring
 * @s: number of bytes string
 * @accept: source string
 * Return: always i.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			j++;
			while (s[i] == accept[j])
			break;
		}
	i++;
	while (s[i] != accept[j])
	break;
	}
	return (i);
}
