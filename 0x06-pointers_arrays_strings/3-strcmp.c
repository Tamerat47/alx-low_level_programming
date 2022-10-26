#include "main.h"
/**
 * _strcmp - a function that compare's two string
 * @s1: a pointer to the first string
 * @s2: a pointer to the first string
 *
 * Return: print the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	if (s1[i] > s2[j] || s2[j] > s1[i])
		return (*s1 - *s2);
	else
		return ((*s1 - *s1) || (*s2 - *s2));
}
