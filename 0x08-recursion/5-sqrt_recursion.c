#include "main.h"
/**
 * _sqrt_recursion - a funtin that returns the square root of num
 * @n: integer
 *
 * Return: n result
 */
int _sqrt_recursion(int n)
{
	int x;

	if (x != 0)
	{
		x = n / x;
	}
	if (x * x == n)
	{
		x = _sqrt_recursion(n);
		return (x);
	}
	else
		return (-1);
}
