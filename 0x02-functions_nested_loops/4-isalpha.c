#include "main.h"

/**
 * _isalpha - boolean
 * @c: argument char
 * Return: 0 or 1
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
