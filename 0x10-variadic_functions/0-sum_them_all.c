#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function Returns the sum of all its paramters.
 * @n: number of paramters
 * @...: number of paramters.
 *
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(var, n);

	while (i < n)
		sum += va_arg(var, int);
		i++;

	va_end(var);

	return (sum);
}
