#include "main.h"
/**
 * _sqrt_recursion - a funtin that returns the square root of num
 * @n: integer
 *
 * Return: n result
 */
int _sqrt_recursion(int n, int r)
{
	int r;

	if (r != 0)
	{
		r = n / r;
	}
	if (r * r == n)
	{
		r = _sqrt_recursion(n);
		return (r);
	}
	else
		return (-1);
}
