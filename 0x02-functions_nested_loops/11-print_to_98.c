#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural number
 *
 * @n: number of natural number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

}

