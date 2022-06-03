#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and followed by uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{	
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(x);
	putchar('\n');
return (0);
}
