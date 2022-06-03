#include <stdio.h>
/**
* main - Prints a hexadecimal string
*
* Return: Always (Success)
*/
int main(void)
{
	int a;
	for (a = '0'; a <= '9';)
	{
	putchar(a);
	if (a == '9')
		a++;
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
