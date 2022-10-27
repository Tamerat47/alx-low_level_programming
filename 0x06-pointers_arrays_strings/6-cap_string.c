#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @p: points to the string
 * Return: string
 */
char *cap_string(char *p)
{
	int i, j;
	char s[] = {'\t', '\n', 32, '!', '"', '(', ')', ',', '.', ';', '?', '{', '}'};

	for (i = 0; p[i] != '\0';)
	{
		for (j = 0; s[j] != '\0';)
		{
			if ((p[i - 1] == s[j]) && (p[i] >= 97 && p[i] <= 122))
				p[i] -= 32;
		j++;
		}
	i++;
	}
	return (p);
}
