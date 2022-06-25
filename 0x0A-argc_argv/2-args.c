#include "main.h"
/**
 * main - prints all arguments
 * @argc: Number of arguments
 * @argv: pointer to an arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		_putchar(argv[i]);
		i++;
	}
	return (0);
}
