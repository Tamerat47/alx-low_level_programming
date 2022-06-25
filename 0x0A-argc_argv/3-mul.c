#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that print multiplication of two int
 * @argc: number of arguments
 * @argv: pointer of arguments
 * Return: alway 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	while (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;

		printf("%d\n", c);
		return (0);
}
