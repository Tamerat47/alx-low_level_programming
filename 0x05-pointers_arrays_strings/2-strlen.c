#include "main.h"
/**
 *_strlen - length of a string
 *@s: pointer to an integer it will be updated
 *Return: always (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0')
	{
		i++;
	}
	return (i);
}
