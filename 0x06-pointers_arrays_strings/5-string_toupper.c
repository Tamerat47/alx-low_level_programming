#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 *
 * @p: a pointer that  points to the string
 * Return: retruns to the value of the string
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0';)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	i++;
	}
	return (p);
}
