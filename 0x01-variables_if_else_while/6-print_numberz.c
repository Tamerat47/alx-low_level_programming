#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = '0'; a < '10'; a++)
		putchar(a);
	putchar('\n');
return (0);
}
