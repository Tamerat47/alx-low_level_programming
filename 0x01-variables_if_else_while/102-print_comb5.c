#include <stdio.h>
#include <stdlib.h>
/**
 * main - print two two-digit numbers
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 99; a++)
		{
		if (a <= 99)
			{
			putchar((char)a / 10 + '0');
			putchar((char)a % 10 + '0');
			putchar(' ');
			}
		}
	return (0);
}
