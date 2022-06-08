#include "main.h"
/**
 * print_alphabet_x10 - print 10x of alpha
 */
void print_alphabet_x10(void)
{
	char x;

	x = 'a';
	for (int i = 0; i <= 9; i++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
