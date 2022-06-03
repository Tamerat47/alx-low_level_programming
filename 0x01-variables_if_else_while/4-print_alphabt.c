#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x != 'e' && x != 'q')
		putchar(x);
	}
	putchar('\n');
	return (0);
}

