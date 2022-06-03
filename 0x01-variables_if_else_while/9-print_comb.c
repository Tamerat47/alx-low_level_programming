#include <stdio.h>
/**
* main - Prints a hexadecimal string
*
* Return: Always (Success)
*/
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	if (a == '9')
		continue;
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
