#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural number
 *
 * @n: number of natural number
 */
void print_to_98(int n)
{
	while (n >= 98)
	{
		if (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	while (n < 98)
	{
		if (n < 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}

