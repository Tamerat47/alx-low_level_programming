#include "main.h"
/**
 * _sqrt_recursion - a funtin that returns the square root of num
 * @n: integer
 * @r: result
 * Return: n result
 */
int _sqrt_recursion(int n, int r)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - _sqrt_recursion
 * @n: integer
 * @r: result
 * Return: r result
 */
int _sqrt(int n, int r)
{
	if (r > 0 && n == r * r)
	{
		r *= _sqrt(n, r + 1);
		return (r);

	}
	else
		return (-1);
}
