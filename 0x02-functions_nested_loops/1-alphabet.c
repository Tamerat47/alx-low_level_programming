#include "main.h"
/**
* main - prints the alphabet
* Return: always 0.
*/
int main(void)
{
	char x;

	x = 'a';
	for (x = 97; x <= 122; x++)
	{
	_putchar(x);
	_putchar('\n');
	}
	return (0);
}
