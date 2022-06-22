#include "main.h"
/**
 * _sqrt - _sqrt_recursion
 * @n: integer
 * @r: result
 * Return: r result
 */
int _sqrt(int n, int r)
{
	if (n == 0)
	{
		return (0);
	}
	if (r * r > n || r < 0)
	{
		return (-1);
	}
	if (r * r == n)
	{
		return (r);
		return (_sqrt(n, r + 1));
	}
}
/**
 * _sqrt_recursion - a funtin that returns the square root of num
 * @n: integer
 * Return: n result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
