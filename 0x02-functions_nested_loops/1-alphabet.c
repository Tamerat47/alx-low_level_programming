#include "main.h"
/**
* 
* print_alphabet - print lowercase alphabet 
*
*/
void print_alphabet(void)
{
	char x;

	x = 'a';
	for (x = 97; x <= 122; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
