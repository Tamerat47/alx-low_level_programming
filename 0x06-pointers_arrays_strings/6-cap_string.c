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
	char s[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; p[i] != '\0';)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (p[i] == s[j])
			{
				if ((p[i++] && p[i] != s[j]) && (p[i] >= 97 && p[i] <= 122))
					p[i] -= 32;

				else if ((p[i++] && p[i] != s[j]) && (p[i] >= 97 && p[i] <= 122))
					p[i] -= 32;
			}
		}
	i++;
	}
	return (p);
}
