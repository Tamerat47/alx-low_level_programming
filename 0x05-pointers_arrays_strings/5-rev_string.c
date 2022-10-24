#include "main.h"

/**
 * rev_string - a function for reverse string
 * @s: string
 */
void rev_string(char *s)
{
	int i, j;
	char l;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}

	for (j = i - 1; j >= i / 2; j--)
	{
		l = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = l;
	}
}
