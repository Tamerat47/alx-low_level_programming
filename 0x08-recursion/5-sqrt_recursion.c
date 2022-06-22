#include "main.h"
/**
 * _sqrt - _sqrt_recursion
 * @n: integer
 * @r: result
 * Return: r result
 */
int _sqrt(int n, int r)
{
	if (r > 0 && r * r == n)
	{
		return (r);
		return (_sqrt(n, r + 1));
	}
	else if (r < 0 && r * r > n)
		return (-1);
}
/**
 * _sqrt_recursion - a funtin that returns the square root of num
 * @n: integer
 * Return: n result
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt(n, 1));
}
