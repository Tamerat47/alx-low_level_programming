#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: string
 * return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			while (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		while (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
