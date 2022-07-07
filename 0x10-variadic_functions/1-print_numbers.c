#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_numbers - function that returns the sum of all its parameters.
  * @separator: is the string to be printed between numbers
  * @n: is the number of integers passed to the function
  * @...: nubers of int
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	if (n > 0)
	{
		va_start(var, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(var, int));

			if (i != n - 1  && separator != NULL)
				printf("%s", separator);
		}
		va_end(var);
	}
	printf("\n");
}
