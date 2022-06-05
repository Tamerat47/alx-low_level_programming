#include <stdio.h>
#include <stdlib.h>

/**
 * main - print two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			{
			putchar((char)a / 10 + '0');
			putchar((char)a % 10 + '0');
			putchar(' ');
			putchar((char)b / 10 + '0');
			putchar((char)b % 10 + '0');
			} while (a == 98 && b == 99);
			putchar(',');
			putchar(' ');
			}
	}
	return (0);
}
