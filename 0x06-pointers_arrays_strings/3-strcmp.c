#include "main.h"
/**
 * _strcmp - a function that compare's two string
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: print the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, dff = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0';)
	{
		dff = *s1 - *s2;
		i++;
	}
	return (dff);
}
