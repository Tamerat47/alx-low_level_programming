#include "main.h"
/*
 * _strcmp - a function that compare's two string
 * @s1: a pointer to the first string
 * @s2: a pointer to the first string
 *
 * return: print the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
		i++;
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s2[i] - s1[i];
	}
	return (0);
