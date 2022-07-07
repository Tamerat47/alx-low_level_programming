#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: is the string to be printed between the strings
  * @n: number of strings passed to the function
  *
  * @...: number of string
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(var, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(var, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}

		va_end(var);
	}

	printf("\n");
}
