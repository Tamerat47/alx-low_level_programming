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
	while (s1 == s2 && s1 != '\0' || s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
