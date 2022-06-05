#include <stdio.h>
#include <stdlib.h>
/**
 * main - print two two-digit numbers
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int a,b;

	for (a = 0; a <= 99; a++)
		for (b = 0; b <= 99; b++)
		{
		if (a <= 99 && b <= 99)
			{
			putchar((char)a / 10 + '0');
			putchar((char)a % 10 + '0');
			putchar(' ');
			putchar((char)b / 10 + '0');
			putchar((char)b % 10 + '0');
			putchar(',' );
			putchar(' ');
			}
		}
	return (0);
}
