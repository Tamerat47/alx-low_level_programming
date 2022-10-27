#include "main.h"

/**
 * leet - encodes a string
 *
 * @p: points to the string
 * Return: returns the string
 */
char *leet(char *p)
{
	int i, j;
	char s[5] = {'a', 'e', 'o', 't', 'l'};
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char t[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; p[i] != '\0';)
	{
		for (j = 0; j < 5;)
		{
			if (p[i] == s[j] || p[i] == r[j])
			{
				p[i] = t[j];
			}
		j++;
		}
	i++;
	}
	return (p);
}
