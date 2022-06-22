#include "main.h"
/**
 * _sqrt_recursion - a funtin that returns the square root of num
 * @n: integer
 * @r: result
 * Return: n result
 */
int _sqrt_recursion(int n, int r)
{

	if (r != 0 && n == r * r)
	{
		r = _sqrt_recursion(n);
		return (r);
	}
	else
		return (-1);
}
