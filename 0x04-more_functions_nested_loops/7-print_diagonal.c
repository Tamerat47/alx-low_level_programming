#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal lines
 *
 * @n: line length
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0 )
	{
		for (i = 1; i <= n; i++)
		{	
			for (j = 1; j <= i; j++)
				putchar(' ');

		putchar('\\');
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
